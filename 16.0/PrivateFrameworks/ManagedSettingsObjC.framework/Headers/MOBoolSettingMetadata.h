// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOBOOLSETTINGMETADATA_H
#define MOBOOLSETTINGMETADATA_H



#import "MOSettingMetadata.h"

@interface MOBoolSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) NSInteger combineOperator; // ivar: _combineOperator


-(BOOL)_combine:(BOOL)arg0 with:(BOOL)arg1 ;
-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultBool:(BOOL)arg0 combineOperator:(NSInteger)arg1 isPublic:(BOOL)arg2 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif