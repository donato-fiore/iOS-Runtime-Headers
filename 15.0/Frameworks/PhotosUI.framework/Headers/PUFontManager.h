// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFONTMANAGER_H
#define PUFONTMANAGER_H

@class PXObservable, UIFont;



@interface PUFontManager : PXObservable

@property (retain, nonatomic) UIFont *albumListSectionTitleLabelFont; // ivar: _albumListSectionTitleLabelFont
@property (retain, nonatomic) UIFont *albumListSubtitleLabelFont; // ivar: _albumListSubtitleLabelFont
@property (retain, nonatomic) UIFont *albumListTitleLabelFont; // ivar: _albumListTitleLabelFont


-(id)init;
-(id)mutableChangeObject;
-(void)_preferredContentSizeChanged:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)dealloc;
-(void)invalidateFonts;


@end


#endif