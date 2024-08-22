// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCPRESENTMENTREQUESTEDELEMENT_H
#define DCPRESENTMENTREQUESTEDELEMENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentRequestedElement : NSObject <NSSecureCoding>



@property (retain) NSString *elementIdentifier; // ivar: _elementIdentifier
@property NSUInteger intentToRetain; // ivar: _intentToRetain


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElementIdentifier:(id)arg0 intentToRetain:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif