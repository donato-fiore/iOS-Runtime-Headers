// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSFDSOPTIONS_H
#define AMSFDSOPTIONS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSFDSOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger action; // ivar: _action
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif