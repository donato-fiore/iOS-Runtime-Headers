// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXELEMENTINTERACTIONMANAGER_H
#define AXELEMENTINTERACTIONMANAGER_H

@class AXElement, AXUIClient, NSString;
@protocol AXUIClientDelegate, AXElementInteractionManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXElementInteractionManager : NSObject <AXUIClientDelegate>

 {
    BOOL _interactionEnabled;
    AXElement *_focusedElement;
    *__AXObserver _axEventObserver;
    AXUIClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXElementInteractionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayCursor; // ivar: _displayCursor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_moveFocusByHitTesting:(NSInteger)arg0 ;
-(BOOL)performActivate;
-(BOOL)performDirectionalNavigation:(NSInteger)arg0 ;
-(id)_allowDelegateToDecideElement:(id)arg0 ;
-(id)_client;
-(id)_clientIdentifier;
-(id)focusedElement;
-(id)init;
-(int)_registerForAXNotifications:(BOOL)arg0 ;
-(void)_handleLayoutChange;
-(void)_handleScreenChange;
-(void)_highlightElement:(id)arg0 ;
-(void)_initializeAXObserver;
-(void)_moveToElement:(id)arg0 ;
-(void)_sendMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 errorHandler:(id)arg2 ;
-(void)_sendMessageWithIdentifier:(NSUInteger)arg0 errorHandler:(id)arg1 ;
-(void)endInteractionMode;
-(void)initializeFocus;
-(void)startInteractionMode;


@end


#endif