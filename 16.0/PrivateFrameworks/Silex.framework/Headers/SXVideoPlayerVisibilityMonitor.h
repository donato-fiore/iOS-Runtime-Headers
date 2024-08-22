// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXVIDEOPLAYERVISIBILITYMONITOR_H
#define SXVIDEOPLAYERVISIBILITYMONITOR_H

@class NSString, NSMutableArray;
@protocol SXVisibilityMonitoring;

#import <Foundation/Foundation.h>

#import "SXVisibilityMonitor.h"

@interface SXVideoPlayerVisibilityMonitor : NSObject <SXVisibilityMonitoring>



@property (readonly, nonatomic) BOOL appeared;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *didAppearBlocks; // ivar: _didAppearBlocks
@property (readonly, nonatomic) NSMutableArray *didDisappearBlocks; // ivar: _didDisappearBlocks
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) id *object;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (retain, nonatomic) SXVisibilityMonitor *visibilityMonitor; // ivar: _visibilityMonitor
@property (readonly, nonatomic) CGFloat visiblePercentage;
@property (readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // ivar: _visiblePercentageBlocks
@property (readonly, nonatomic) NSMutableArray *willAppearBlocks; // ivar: _willAppearBlocks
@property (readonly, nonatomic) NSMutableArray *willDisappearBlocks; // ivar: _willDisappearBlocks


-(id)initWithVisibilityMonitor:(id)arg0 ;
-(void)configureVisibilityMonitor:(id)arg0 ;
-(void)onDidAppear:(id)arg0 ;
-(void)onDidDisappear:(id)arg0 ;
-(void)onVisiblePercentageChange:(id)arg0 ;
-(void)onWillAppear:(id)arg0 ;
-(void)onWillDisappear:(id)arg0 ;


@end


#endif