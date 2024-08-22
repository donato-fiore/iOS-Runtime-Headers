// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYVALUECOMPUTEDPROPERTY_H
#define NSKEYVALUECOMPUTEDPROPERTY_H



#import "NSKeyValueProperty.h"
#import "NSString.h"

@interface NSKeyValueComputedProperty : NSKeyValueProperty {
    NSString *_operationName;
    NSString *_operationArgumentKeyPath;
    NSKeyValueProperty *_operationArgumentProperty;
}




-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg0 ;
-(BOOL)object:(id)arg0 withObservance:(id)arg1 willChangeValueForKeyOrKeys:(id)arg2 recurse:(BOOL)arg3 forwardingValues:(struct ? *)arg4 ;
-(Class)_isaForAutonotifying;
-(id)_initWithContainerClass:(id)arg0 keyPath:(id)arg1 propertiesBeingInitialized:(struct __CFSet *)arg2 ;
-(id)_keyPathIfAffectedByValueForKey:(id)arg0 exactMatch:(*BOOL)arg1 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg0 ;
-(id)description;
-(void)_addDependentValueKey:(id)arg0 ;
-(void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg0 getAffectingProperties:(id)arg1 ;
-(void)dealloc;
-(void)object:(id)arg0 didAddObservance:(id)arg1 recurse:(BOOL)arg2 ;
-(void)object:(id)arg0 didRemoveObservance:(id)arg1 recurse:(BOOL)arg2 ;
-(void)object:(id)arg0 withObservance:(id)arg1 didChangeValueForKeyOrKeys:(id)arg2 recurse:(BOOL)arg3 forwardingValues:(struct ? )arg4 ;


@end


#endif