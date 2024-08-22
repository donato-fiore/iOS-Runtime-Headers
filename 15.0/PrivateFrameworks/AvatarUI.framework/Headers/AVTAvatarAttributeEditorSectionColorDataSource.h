// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONCOLORDATASOURCE_H
#define AVTAVATARATTRIBUTEEDITORSECTIONCOLORDATASOURCE_H

@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "AVTAvatarAttributeEditorColorSection.h"

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject

@property (retain, nonatomic) AVTAvatarAttributeEditorColorSection *colorSection; // ivar: _colorSection
@property (nonatomic) NSObject<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (readonly, nonatomic) BOOL isShowingExtended;
@property (readonly, nonatomic) BOOL isShowingSlider;
@property (nonatomic) NSInteger selectedExtendedColorIndex; // ivar: _selectedExtendedColorIndex
@property (readonly, nonatomic) NSInteger selectedItemIndex;
@property (nonatomic) NSInteger selectedPrimaryColorIndex; // ivar: _selectedPrimaryColorIndex


+(NSInteger)indexOfItem:(id)arg0 inItems:(id)arg1 ;
+(id)selectedItemFromItems:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(id)indexPathOfExtendedIcon;
-(id)init;
-(id)sectionItemAtIndex:(NSInteger)arg0 ;
-(void)resetToDefaultDisplayMode;
-(void)selectSectionItemAtIndexPath:(id)arg0 ;
-(void)toggleExtendedMode;
-(void)toggleSliderMode;
-(void)updateSelectedIndexesSelectingItem:(id)arg0 fromUserInteraction:(BOOL)arg1 ;


@end


#endif