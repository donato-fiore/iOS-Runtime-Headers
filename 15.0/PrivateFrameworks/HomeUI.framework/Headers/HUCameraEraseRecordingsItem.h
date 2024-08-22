// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAERASERECORDINGSITEM_H
#define HUCAMERAERASERECORDINGSITEM_H

@class HFStaticItem, HMCameraProfile;



@interface HUCameraEraseRecordingsItem : HFStaticItem

@property (readonly, copy, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithCameraProfile:(id)arg0 ;
-(void)_updateResultsForFuture:(id)arg0 withHiddenStatus:(BOOL)arg1 ;


@end


#endif