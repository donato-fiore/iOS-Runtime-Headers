// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMOVEASSETSTOSHAREDLIBRARYACTION_H
#define PXMOVEASSETSTOSHAREDLIBRARYACTION_H

@class NSArray;


#import "PXAssetsAction.h"

@interface PXMoveAssetsToSharedLibraryAction : PXAssetsAction {
    NSArray *_suggestedAssets;
}




-(id)actionIdentifier;
-(id)initWithAssets:(id)arg0 ;
-(id)localizedActionName;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif