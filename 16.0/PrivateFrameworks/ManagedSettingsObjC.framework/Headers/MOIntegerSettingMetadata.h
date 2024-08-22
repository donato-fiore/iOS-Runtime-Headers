// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOINTEGERSETTINGMETADATA_H
#define MOINTEGERSETTINGMETADATA_H



#import "MOSettingMetadata.h"

@interface MOIntegerSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) NSInteger combineOperator; // ivar: _combineOperator
@property (readonly, nonatomic) NSInteger lowerBound; // ivar: _lowerBound
@property (readonly, nonatomic) NSInteger upperBound; // ivar: _upperBound


-(NSInteger)_combine:(NSInteger)arg0 with:(NSInteger)arg1 ;
-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultInt:(NSInteger)arg0 combineOperator:(NSInteger)arg1 lowerBound:(NSInteger)arg2 upperBound:(NSInteger)arg3 isPublic:(BOOL)arg4 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif