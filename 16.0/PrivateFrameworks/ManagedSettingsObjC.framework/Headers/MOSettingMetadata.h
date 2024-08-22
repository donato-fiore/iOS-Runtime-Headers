// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOSETTINGMETADATA_H
#define MOSETTINGMETADATA_H


#import <Foundation/Foundation.h>


@interface MOSettingMetadata : NSObject

@property (readonly, retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) BOOL isPublic; // ivar: _isPublic


-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultValue:(id)arg0 isPublic:(BOOL)arg1 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif