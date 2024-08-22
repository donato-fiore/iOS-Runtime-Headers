// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTDELETEACTION_H
#define PXIMPORTDELETEACTION_H

@class NSArray, NSMutableArray, NSProgress, NSString;


#import "PXImportConcurrentAction.h"
#import "PXImportController.h"

@interface PXImportDeleteAction : PXImportConcurrentAction {
    NSArray *_assets;
    NSMutableArray *_removedAssets;
}


@property (weak) PXImportController *importController; // ivar: _importController
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSString *sessionUuid; // ivar: _sessionUuid
@property BOOL userInitiatedDelete; // ivar: _userInitiatedDelete


-(BOOL)canDeleteAssets;
-(id)initWithAssets:(id)arg0 ;
-(id)performAction;
-(void)_performMockAction;
-(void)_performRealAction;
-(void)_preAction;
-(void)_startObservingDeleteProgress;
-(void)_stopObservingDeleteProgress;
-(void)cancel;
-(void)dealloc;
-(void)didRemove:(id)arg0 ;
-(void)finish;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendActionProgress:(CGFloat)arg0 ;
-(void)start;


@end


#endif