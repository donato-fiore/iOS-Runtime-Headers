// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFEATUREFLAGITFE_H
#define AMSFEATUREFLAGITFE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isReadonly) BOOL readonly; // ivar: _readonly
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)_isITFEValueCustom:(id)arg0 ;
+(id)_concreteITFEs;
+(id)_customITFEs;
+(id)_flagGroupITFEs;
+(id)_mutableITFEs;
+(id)_profileITFEs;
+(id)_remoteGroupITFEs;
+(id)fetchCustomFeatures;
+(id)fetchMutableFeatures;
+(id)fetchProfileFeatures;
+(void)removeOrphanITFEValues:(id)arg0 ;
+(void)resetFeatures;
+(void)setMutableFeatureName:(id)arg0 toValue:(id)arg1 ;
+(void)verifyOrphans;
+(void)verifyOrphansForGroups:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithValue:(id)arg0 isEnabled:(BOOL)arg1 isMutable:(BOOL)arg2 ;
-(void)toggle:(BOOL)arg0 ;


@end


#endif