// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDTITLELAYOUT_H
#define PXFEEDTITLELAYOUT_H

@class NSDictionary, NSString;
@protocol PXChangeObserver, PXGStringSource;


#import "PXGLayout.h"
#import "PXFeedViewModel.h"

@interface PXFeedTitleLayout : PXGLayout <PXChangeObserver, PXGStringSource>

 {
    ? _updateFlags;
    unsigned int _titleSpriteIndex;
    unsigned short _titleMediaVersion;
    NSDictionary *_subtitleAttributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXFeedViewModel *viewModel; // ivar: _viewModel


-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateAttributes;
-(void)_invalidateTitle;
-(void)_invalidateTitleContentVersion;
-(void)_updateAttributes;
-(void)_updateTitle;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;


@end


#endif