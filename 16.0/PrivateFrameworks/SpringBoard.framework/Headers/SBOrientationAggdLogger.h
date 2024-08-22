// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBORIENTATIONAGGDLOGGER_H
#define SBORIENTATIONAGGDLOGGER_H

@class FBSDisplayLayoutMonitor, NSArray, NSString;
@protocol FBSDisplayLayoutObserver;

#import <Foundation/Foundation.h>


@interface SBOrientationAggdLogger : NSObject <FBSDisplayLayoutObserver>

 {
    FBSDisplayLayoutMonitor *_layoutMonitor;
    NSInteger _currentOrientation;
    NSUInteger _currentOrientationStartTime;
    NSArray *_currentElements;
    BOOL _isKeyboardOnScreen;
    NSUInteger _keyboardOnScreenStartTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_bucketedElapsedTimeWithStartTime:(NSUInteger)arg0 ;
-(id)init;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_noteSignificantTimeChanged:(id)arg0 ;
-(void)_orientationLockChanged:(id)arg0 ;
-(void)_saveOrientationLockAggdValues;
-(void)dealloc;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;


@end


#endif