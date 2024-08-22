// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSBUNDLEODRTAG_H
#define _NSBUNDLEODRTAG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _NSBundleODRTag : NSObject <NSSecureCoding>



@property BOOL alwaysPreserved; // ivar: _alwaysPreserved
@property CGFloat preservationPriority; // ivar: _preservationPriority


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif