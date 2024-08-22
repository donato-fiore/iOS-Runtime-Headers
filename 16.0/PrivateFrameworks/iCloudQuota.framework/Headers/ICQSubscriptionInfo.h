// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQSUBSCRIPTIONINFO_H
#define ICQSUBSCRIPTIONINFO_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQSubscriptionInfo : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isiCloudPlusSubscriber) BOOL iCloudPlusSubscriber; // ivar: _iCloudPlusSubscriber
@property (retain, nonatomic) NSArray *specifiersInfo; // ivar: _specifiersInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif