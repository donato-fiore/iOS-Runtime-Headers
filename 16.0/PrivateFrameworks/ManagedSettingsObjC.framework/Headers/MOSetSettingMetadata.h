// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOSETSETTINGMETADATA_H
#define MOSETSETTINGMETADATA_H



#import "MOSettingMetadata.h"

@interface MOSetSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) NSInteger combineOperator; // ivar: _combineOperator
@property (readonly, nonatomic) NSUInteger maximumCount; // ivar: _maximumCount


-(id)_combine:(id)arg0 with:(id)arg1 ;
-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultSet:(id)arg0 combineOperator:(NSInteger)arg1 maximumCount:(NSUInteger)arg2 isPublic:(BOOL)arg3 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif