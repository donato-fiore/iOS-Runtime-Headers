// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRESOURCETRANSFERTASKOPTIONS_H
#define CPLRESOURCETRANSFERTASKOPTIONS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLResourceTransferTaskOptions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger intent; // ivar: _intent
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (nonatomic) ? timeRange; // ivar: _timeRange


+(BOOL)isForegroundOperationForIntent:(NSUInteger)arg0 priority:(NSUInteger)arg1 ;
+(BOOL)isHighPriorityForIntent:(NSUInteger)arg0 priority:(NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
+(id)descriptionForIntent:(NSUInteger)arg0 ;
+(id)descriptionForIntentPriority:(NSUInteger)arg0 ;
+(id)optionsForLegacyIntent:(NSUInteger)arg0 ;
-(BOOL)hasValidTimeRange;
-(BOOL)isHighPriority;
-(BOOL)shouldKeepPower;
-(NSUInteger)legacyIntent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHighPriority:(BOOL)arg0 ;
-(id)initWithIntent:(NSUInteger)arg0 priority:(NSUInteger)arg1 ;
-(id)initWithIntent:(NSUInteger)arg0 priority:(NSUInteger)arg1 timeRange:(struct ? )arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif