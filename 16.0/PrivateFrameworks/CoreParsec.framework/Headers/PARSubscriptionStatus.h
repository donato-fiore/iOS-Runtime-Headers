// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARSUBSCRIPTIONSTATUS_H
#define PARSUBSCRIPTIONSTATUS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PARSubscriptionStatus : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL isSubscribed; // ivar: isSubscribed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif