// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFEATUREFLAGITFE_H
#define AMSFEATUREFLAGITFE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isReadonly) BOOL readonly; // ivar: _readonly
@property (copy, nonatomic) NSString *value; // ivar: _value


+(id)fetchMutableFeatures;
+(id)fetchProfileFeatures;
+(void)resetFeatures;
+(void)setMutableFeatureName:(id)arg0 toValue:(id)arg1 ;
-(id)initWithValue:(id)arg0 isEnabled:(BOOL)arg1 isMutable:(BOOL)arg2 ;
-(void)toggle:(BOOL)arg0 ;


@end


#endif