// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISYSTEMGESTUREMANAGER_H
#define _UISYSTEMGESTUREMANAGER_H

@class NSMutableDictionary, FBSDisplayMonitor, NSString;
@protocol UIGestureRecognizerDelegate, FBSDisplayObserving;

#import <Foundation/Foundation.h>


@interface _UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBSDisplayObserving>

 {
    NSMutableDictionary *_displayIdentityToManagerMap;
    FBSDisplayMonitor *_displayMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedInstanceIfExists;
+(id)sharedInstance;
+(void)_cancelTouchesWithIdentifiers:(id)arg0 forDisplayWithIdentity:(id)arg1 ;
-(id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg0 ;
-(id)init;
-(id)windowForSystemGesturesForDisplayWithIdentity:(id)arg0 ;
-(void)addGestureRecognizer:(id)arg0 recognitionEvent:(NSInteger)arg1 toDisplayWithIdentity:(id)arg2 ;
-(void)addGestureRecognizer:(id)arg0 toDisplayWithIdentity:(id)arg1 ;
-(void)clearTransformFromDisplayWithIdentity:(id)arg0 ;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg0 fromDisplayWithIdentity:(id)arg1 ;
-(void)setTransform:(struct CGAffineTransform )arg0 onDisplayWithIdentity:(id)arg1 ;


@end


#endif