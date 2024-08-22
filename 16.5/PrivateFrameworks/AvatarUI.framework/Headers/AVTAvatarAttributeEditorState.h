// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORSTATE_H
#define AVTAVATARATTRIBUTEEDITORSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorState : NSObject

@property (retain, nonatomic) NSMutableDictionary *multicolorEnabledStates; // ivar: _multicolorEnabledStates
@property (retain, nonatomic) NSMutableDictionary *multicolorSelectedStates; // ivar: _multicolorSelectedStates
@property (retain, nonatomic) NSMutableDictionary *pairedStates; // ivar: _pairedStates


+(id)buildStateFromCoreModel:(id)arg0 avatarConfiguration:(id)arg1 ;
-(BOOL)isCategoryPaired:(NSInteger)arg0 ;
-(NSInteger)enabledMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)arg0 ;
-(NSInteger)selectedMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithPairedStates:(id)arg0 multicolorEnabledStates:(id)arg1 multicolorSelectedStates:(id)arg2 ;
-(void)setCategory:(NSInteger)arg0 inPairedState:(BOOL)arg1 ;
-(void)setEnabledMulticolorSubpickersIndex:(NSInteger)arg0 forMulticolorPickerIdentifier:(id)arg1 ;
-(void)setSelectedMulticolorSubpickersIndex:(NSInteger)arg0 forMulticolorPickerIdentifier:(id)arg1 ;


@end


#endif