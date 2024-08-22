// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSUBSCRIPTIONSOURCE_H
#define VSSUBSCRIPTIONSOURCE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger kind; // ivar: _kind


+(BOOL)supportsSecureCoding;
+(id)currentSource;
+(id)subscriptionSourceForAppWithBundleID:(id)arg0 ;
+(id)subscriptionSourceForWebsiteWithDomainName:(id)arg0 ;
+(id)subscriptionSourceForWebsiteWithURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif