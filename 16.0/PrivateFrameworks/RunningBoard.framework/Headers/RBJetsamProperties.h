// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBJETSAMPROPERTIES_H
#define RBJETSAMPROPERTIES_H


#import <Foundation/Foundation.h>


@interface RBJetsamProperties : NSObject {
    id *_memoryLimitCategories;
    id *_globalProperties;
    int _taskLimit;
    int _unLimit;
    BOOL _freezerEligibleSet;
}


@property (readonly, nonatomic, getter=isFreezerEligible) BOOL freezerEligible; // ivar: _freezerEligible
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)jetsamPropertiesForProperties:(id)arg0 globalProperties:(id)arg1 taskLimit:(int)arg2 unLimit:(int)arg3 ;
-(id)_altKeyForCategory:(id)arg0 strength:(unsigned char)arg1 ;
-(id)_defaultKeyForCategory:(id)arg0 strength:(unsigned char)arg1 ;
-(id)_directPropertyDescription:(id)arg0 ;
-(id)_initWithProperties:(id)arg0 globalProperties:(id)arg1 taskLimit:(int)arg2 unLimit:(int)arg3 ;
-(id)_keyForCategory:(id)arg0 strength:(unsigned char)arg1 ;
-(id)_propertiesDescription;
-(id)description;
-(id)getValueFrom:(id)arg0 forKey:(id)arg1 ;
-(int)_integerLimitValue:(id)arg0 ;
-(int)memoryLimitForCategory:(id)arg0 strength:(*unsigned char)arg1 ;
-(unsigned char)_altStrength:(unsigned char)arg0 ;
-(void)_setLimitFor:(id)arg0 strength:(unsigned char)arg1 toValue:(id)arg2 ;


@end


#endif