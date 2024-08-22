// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIFRAMEBUFFERSIZECHANGENOTIFIER_H
#define PUIFRAMEBUFFERSIZECHANGENOTIFIER_H

@class NSMutableArray, FBSDisplayMonitor, NSString;
@protocol FBSDisplayObserving;

#import <Foundation/Foundation.h>


@interface PUIFramebufferSizeChangeNotifier : NSObject <FBSDisplayObserving>

 {
    NSMutableArray *_listeners;
    FBSDisplayMonitor *_displayMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)addListener:(id)arg0 ;
-(void)_onMainQueue_notifyListeners;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)removeListener:(id)arg0 ;


@end


#endif