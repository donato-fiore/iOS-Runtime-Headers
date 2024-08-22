// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTINPUTDEBUGSTATEINTROSPECTOR_H
#define PKTEXTINPUTDEBUGSTATEINTROSPECTOR_H

@protocol PKTextInputDebugStateIntrospectorDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputInteraction.h"

@interface PKTextInputDebugStateIntrospector : NSObject

@property (weak, nonatomic) NSObject<PKTextInputDebugStateIntrospectorDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) PKTextInputInteraction *interaction; // ivar: _interaction


+(id)_knownInstances;
+(id)debugStateLineDescriptionForIntrospectable:(id)arg0 ;
+(void)debugStateDidChange;
-(BOOL)debugStateCanShowDetailsForStateKey:(id)arg0 ;
-(id)_introspectableForStateKey:(id)arg0 ;
-(id)debugStateDescriptionForStateKey:(id)arg0 ;
-(id)debugStateDetailViewControllerForStateKey:(id)arg0 ;
-(id)debugStateKeys;
-(id)debugStateTitleForStateKey:(id)arg0 ;
-(id)fullDebugStateDescription;
-(id)initWithInteraction:(id)arg0 ;
-(void)_debugStateDidChange;
-(void)dealloc;


@end


#endif