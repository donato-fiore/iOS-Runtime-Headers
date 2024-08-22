// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFACERECOGNITIONITEMMODULE_H
#define HUFACERECOGNITIONITEMMODULE_H

@class HFItemModule, HFStaticItem, HMHome, HFStaticItemProvider;



@interface HUFaceRecognitionItemModule : HFItemModule

@property (retain, nonatomic) HFStaticItem *faceRecognitionCellItem; // ivar: _faceRecognitionCellItem
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;


@end


#endif