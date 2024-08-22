// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOAPPLICATIONSETTINGMETADATA_H
#define MOAPPLICATIONSETTINGMETADATA_H



#import "MOSettingMetadata.h"
#import "MOApplication.h"

@interface MOApplicationSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) NSInteger combineOperator; // ivar: _combineOperator
@property (readonly, nonatomic) MOApplication *defaultValue;


-(id)_combine:(id)arg0 with:(id)arg1 ;
-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultApplication:(id)arg0 combineOperator:(NSInteger)arg1 isPublic:(BOOL)arg2 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif