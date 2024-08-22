// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPTRANSLATOR_H
#define AXPTRANSLATOR_H

@class NSMutableDictionary;
@protocol AXPTranslationDelegateHelper, AXPTranslationTokenDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate;

#import <Foundation/Foundation.h>


@interface AXPTranslator : NSObject

@property (nonatomic) BOOL accessibilityEnabled; // ivar: _accessibilityEnabled
@property (weak, nonatomic) NSObject<AXPTranslationDelegateHelper> *bridgeDelegate; // ivar: _bridgeDelegate
@property (weak, nonatomic) NSObject<AXPTranslationTokenDelegateHelper> *bridgeTokenDelegate; // ivar: _bridgeTokenDelegate
@property (retain, nonatomic) NSMutableDictionary *fakeElementCache; // ivar: _fakeElementCache
@property (weak, nonatomic) NSObject<AXPTranslationRuntimeHelper> *runtimeDelegate; // ivar: _runtimeDelegate
@property (nonatomic) BOOL supportsDelegateTokens; // ivar: _supportsDelegateTokens
@property (weak, nonatomic) NSObject<AXPTranslationSystemAppDelegate> *systemAppDelegate; // ivar: _systemAppDelegate


+(id)sharedInstance;
+(id)sharediOSInstance;
-(id)_translationApplicationObjectForPidNumber:(id)arg0 ;
-(id)attributedStringConversionBlock:(SEL)arg0 ;
-(id)frontmostApplicationWithDisplayId:(unsigned int)arg0 bridgeDelegateToken:(id)arg1 ;
-(id)init;
-(id)iosPlatformElementFromTranslation:(id)arg0 ;
-(id)objectAtPoint:(struct CGPoint )arg0 displayId:(unsigned int)arg1 bridgeDelegateToken:(id)arg2 ;
-(id)platformElementFromTranslation:(id)arg0 ;
-(id)platformTranslator;
-(id)processActionRequest:(id)arg0 ;
-(id)processAttributeRequest:(id)arg0 ;
-(id)processCanSetAttribute:(id)arg0 ;
-(id)processFrontMostApp:(id)arg0 ;
-(id)processHitTest:(id)arg0 ;
-(id)processMultipleAttributeRequest:(id)arg0 ;
-(id)processSetAttribute:(id)arg0 ;
-(id)processSupportedActions:(id)arg0 ;
-(id)processSupportsAttributes:(id)arg0 ;
-(id)processTranslatorRequest:(id)arg0 ;
-(id)remoteTranslationDataWithTranslation:(id)arg0 pid:(int)arg1 ;
-(id)sendTranslatorRequest:(id)arg0 ;
-(id)translationApplicationObject;
-(id)translationApplicationObjectForPid:(int)arg0 ;
-(id)translationObjectFromData:(id)arg0 ;
-(void)_resetBridgeTokensForResponse:(id)arg0 bridgeDelegateToken:(id)arg1 ;
-(void)enableAccessibility;
-(void)handleNotification:(NSUInteger)arg0 data:(id)arg1 associatedObject:(id)arg2 ;
-(void)initializeAXRuntimeForSystemAppServer;
-(void)processPlatformNotification:(NSUInteger)arg0 data:(id)arg1 ;


@end


#endif