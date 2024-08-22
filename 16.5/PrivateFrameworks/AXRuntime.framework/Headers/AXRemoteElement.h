// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXREMOTEELEMENT_H
#define AXREMOTEELEMENT_H

@class NSMutableSet, NSString;
@protocol AXRemoteElementChildrenDelegate;

#import <Foundation/Foundation.h>


@interface AXRemoteElement : NSObject {
    NSMutableSet *_allChildren;
}


@property (weak, nonatomic) id *accessibilityContainer; // ivar: _accessibilityContainer
@property (readonly, nonatomic) CGRect containerAccessibilityFrame;
@property (nonatomic) unsigned int contextId; // ivar: _contextId
@property (copy, nonatomic) id *contextRetrieval; // ivar: _contextRetrieval
@property (nonatomic) BOOL deniesDirectAppConnection; // ivar: _deniesDirectAppConnection
@property (readonly, nonatomic) unsigned int localHostingWindowContextId;
@property (nonatomic) unsigned int machPort; // ivar: _machPort
@property (nonatomic) BOOL onClientSide; // ivar: _onClientSide
@property (copy, nonatomic) id *pidRetrieval; // ivar: _pidRetrieval
@property (weak, nonatomic) NSObject<AXRemoteElementChildrenDelegate> *remoteChildrenDelegate; // ivar: _remoteChildrenDelegate
@property (nonatomic) int remotePid; // ivar: _remotePid
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSUInteger uuidHash;


+(BOOL)_isSerializableAccessibilityElement;
+(BOOL)registerRemoteElement:(id)arg0 remotePort:(unsigned int)arg1 ;
+(id)registeredRemoteElements;
+(id)remoteElementForBlock:(id)arg0 ;
+(id)remoteElementsForBlock:(id)arg0 ;
+(id)remoteElementsForContextId:(unsigned int)arg0 ;
+(void)initialize;
-(BOOL)_accessibilityHasVisibleFrame;
-(BOOL)_accessibilityIsGroupedParent;
-(BOOL)_accessibilitySetNativeFocus;
-(NSUInteger)_accessibilityAutomationType;
-(id)_accessibilityActiveKeyboard;
-(id)_accessibilityFirstElement;
-(id)_accessibilityHandwritingElement;
-(id)_accessibilityLastElement;
-(id)_accessibilityResponderElement;
-(id)_accessibilitySortedElementsWithin;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_remoteElementWithAttribute:(NSInteger)arg0 limitToRemoteSubviews:(BOOL)arg1 ;
-(id)accessibilityElements;
-(id)description;
-(id)initWithUUID:(id)arg0 andRemotePid:(int)arg1 andContextId:(unsigned int)arg2 ;
-(struct CGRect )accessibilityFrame;
-(unsigned int)_accessibilityContextId;
-(void)_accessibilityIncreaseSelection:(id)arg0 ;
-(void)_accessibilitySetFocusOnElement:(BOOL)arg0 ;
-(void)_getRemoteValuesOffMainThread:(id)arg0 ;
-(void)dealloc;
-(void)getLeafElementsFromRemoteSide:(id)arg0 ;
-(void)platformCleanup;
-(void)unregister;


@end


#endif