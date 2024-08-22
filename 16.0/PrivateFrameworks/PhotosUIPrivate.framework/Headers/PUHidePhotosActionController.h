// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUHIDEPHOTOSACTIONCONTROLLER_H
#define PUHIDEPHOTOSACTIONCONTROLLER_H

@class PXHideAssetsAction, NSArray, NSUndoManager;

#import <Foundation/Foundation.h>


@interface PUHidePhotosActionController : NSObject {
    PXHideAssetsAction *_action;
}


@property (readonly, copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


-(id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(id)arg0 ;
-(id)initWithAssets:(id)arg0 undoManager:(id)arg1 ;
-(void)performActionWithCompletionHandler:(id)arg0 ;


@end


#endif