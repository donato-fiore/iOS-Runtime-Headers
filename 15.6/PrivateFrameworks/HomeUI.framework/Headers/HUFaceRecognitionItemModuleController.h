// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFACERECOGNITIONITEMMODULECONTROLLER_H
#define HUFACERECOGNITIONITEMMODULECONTROLLER_H



#import "HUItemModuleController.h"

@interface HUFaceRecognitionItemModuleController : HUItemModuleController



-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg0 personManager:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif