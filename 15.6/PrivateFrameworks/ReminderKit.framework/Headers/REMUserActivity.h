// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMUSERACTIVITY_H
#define REMUSERACTIVITY_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *storage; // ivar: _storage
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)dataFromUserActivity:(id)arg0 ;
+(id)stringForActivityType:(NSInteger)arg0 ;
+(id)userActivityWithDictionaryData:(id)arg0 error:(*id)arg1 ;
+(void)userActivityWithUserActivity:(id)arg0 completion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDictionaryData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)debugDescriptionDetails;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiriIntent:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 storage:(id)arg1 ;
-(id)initWithUniversalLink:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;
-(id)initWithUserActivityData:(id)arg0 ;
-(id)siriIntent;
-(id)universalLink;
-(id)userActivity;
-(id)userActivityData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif