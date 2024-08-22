// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDVIEWPRESENTATIONREQUEST_H
#define ASDVIEWPRESENTATIONREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDViewPresentationRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger viewIdentifier; // ivar: _viewIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithViewIdentifier:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif