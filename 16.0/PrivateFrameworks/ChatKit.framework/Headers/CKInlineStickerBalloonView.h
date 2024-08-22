// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINLINESTICKERBALLOONVIEW_H
#define CKINLINESTICKERBALLOONVIEW_H

@class NSString;


#import "CKImageBalloonView.h"

@interface CKInlineStickerBalloonView : CKImageBalloonView

@property (retain, nonatomic) NSString *stickerAccessibilityDescription;


-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForMessagePart:(id)arg0 ;
-(void)setCanUseOpaqueMask:(BOOL)arg0 ;
-(void)setHasTail:(BOOL)arg0 ;
-(void)setOutlineMask:(id)arg0 ;
-(void)setTailMask:(id)arg0 ;


@end


#endif