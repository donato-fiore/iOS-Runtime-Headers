// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEPROPERTY_H
#define NSKEYVALUEPROPERTY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSKeyValueContainerClass.h"
#import "NSString.h"

@interface NSKeyValueProperty : NSObject <NSCopying>

 {
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}




-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg0 ;
-(BOOL)object:(id)arg0 withObservance:(id)arg1 willChangeValueForKeyOrKeys:(id)arg2 recurse:(BOOL)arg3 forwardingValues:(struct ? *)arg4 ;
-(Class)isaForAutonotifying;
-(id)_initWithContainerClass:(id)arg0 keyPath:(id)arg1 propertiesBeingInitialized:(struct __CFSet *)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dependentValueKeyOrKeysIsASet:(*BOOL)arg0 ;
-(id)keyPath;
-(id)keyPathIfAffectedByValueForKey:(id)arg0 exactMatch:(*BOOL)arg1 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg0 ;
-(id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg0 ;
-(void)dealloc;
-(void)object:(id)arg0 didAddObservance:(id)arg1 recurse:(BOOL)arg2 ;
-(void)object:(id)arg0 didRemoveObservance:(id)arg1 recurse:(BOOL)arg2 ;
-(void)object:(id)arg0 withObservance:(id)arg1 didChangeValueForKeyOrKeys:(id)arg2 recurse:(BOOL)arg3 forwardingValues:(struct ? )arg4 ;


@end


#endif