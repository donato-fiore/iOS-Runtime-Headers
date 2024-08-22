// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGAUTOMATICCONTENTDOWNLOADCONTROLLER_H
#define PSGAUTOMATICCONTENTDOWNLOADCONTROLLER_H

@class PSListController, NSMutableDictionary, NSMutableArray;
@protocol OS_nw_path_evaluator;



@interface PSGAutomaticContentDownloadController : PSListController {
    id *_settingsChangedObserver;
}


@property (retain, nonatomic) NSMutableDictionary *applicationStates; // ivar: _applicationStates
@property (retain, nonatomic) NSMutableArray *applications; // ivar: _applications
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *defaultPathEvaluator; // ivar: _defaultPathEvaluator
@property (nonatomic) BOOL inLowDataMode; // ivar: _inLowDataMode


-(id)applicationEnabled:(id)arg0 ;
-(id)backgroundRefreshState:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)whitelist;
-(void)dealloc;
-(void)setApplicationEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setBackgroundRefreshState:(id)arg0 withSpecifier:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif