// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOSTRINGSETTINGMETADATA_H
#define MOSTRINGSETTINGMETADATA_H

@class NSString, NSDictionary;


#import "MOSettingMetadata.h"

@interface MOStringSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) NSInteger combineOperator; // ivar: _combineOperator
@property (readonly, nonatomic) NSString *defaultValue;
@property (readonly, nonatomic) NSDictionary *rankedAllowedValues; // ivar: _rankedAllowedValues


-(id)_combine:(id)arg0 with:(id)arg1 ;
-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultString:(id)arg0 combineOperator:(NSInteger)arg1 rankedAllowedValues:(id)arg2 isPublic:(BOOL)arg3 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif