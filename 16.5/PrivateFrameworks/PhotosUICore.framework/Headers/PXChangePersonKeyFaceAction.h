// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCHANGEPERSONKEYFACEACTION_H
#define PXCHANGEPERSONKEYFACEACTION_H

@class PHAsset, PHFace, PHPerson;


#import "PXPhotosAction.h"

@interface PXChangePersonKeyFaceAction : PXPhotosAction {
    PHAsset *_asset;
    PHFace *_keyFace;
    PHFace *_keyFaceForUndo;
}


@property (readonly, nonatomic) PHFace *keyFace;
@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)analyticsEventName;
-(id)initWithPerson:(id)arg0 asset:(id)arg1 ;
-(id)initWithPerson:(id)arg0 keyFace:(id)arg1 ;
-(void)_fetchKeyFaceForUndoIfNeeded;
-(void)_invalidateCache;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif