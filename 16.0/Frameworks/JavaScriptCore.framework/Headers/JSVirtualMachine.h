// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JSVIRTUALMACHINE_H
#define JSVIRTUALMACHINE_H


#import <Foundation/Foundation.h>


@interface JSVirtualMachine : NSObject {
    *OpaqueJSContextGroup m_group;
    Lock m_externalDataMutex;
    RetainPtr<NSMapTable> m_contextCache;
    RetainPtr<NSMapTable> m_externalObjectGraph;
    RetainPtr<NSMapTable> m_externalRememberedSet;
}


@property (readonly) *OpaqueJSContextGroup JSContextGroupRef;


+(NSUInteger)setNumberOfDFGCompilerThreads:(NSUInteger)arg0 ;
+(NSUInteger)setNumberOfFTLCompilerThreads:(NSUInteger)arg0 ;
+(id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup *)arg0 ;
+(void)setCrashOnVMCreation:(BOOL)arg0 ;
-(*void)externalDataMutex;
-(BOOL)isOldExternalObject:(id)arg0 ;
-(BOOL)isWebThreadAware;
-(id)contextForGlobalContextRef:(struct OpaqueJSContext *)arg0 ;
-(id)externalObjectGraph;
-(id)externalRememberedSet;
-(id)init;
-(id)initWithContextGroupRef:(struct OpaqueJSContextGroup *)arg0 ;
-(void)addContext:(id)arg0 forGlobalContextRef:(struct OpaqueJSContext *)arg1 ;
-(void)addExternalRememberedObject:(id)arg0 ;
-(void)addManagedReference:(id)arg0 withOwner:(id)arg1 ;
-(void)dealloc;
-(void)removeManagedReference:(id)arg0 withOwner:(id)arg1 ;
-(void)shrinkFootprintWhenIdle;


@end


#endif