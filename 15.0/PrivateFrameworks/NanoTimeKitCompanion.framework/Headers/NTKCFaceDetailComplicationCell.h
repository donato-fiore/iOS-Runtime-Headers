// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCFACEDETAILCOMPLICATIONCELL_H
#define NTKCFACEDETAILCOMPLICATIONCELL_H

@class NSString;


#import "NTKCDetailTableViewCell.h"
#import "NTKComplication.h"

@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell

@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) NTKComplication *complication; // ivar: _complication
@property (readonly, nonatomic) BOOL dateSlot; // ivar: _dateSlot
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL isRichSlot; // ivar: _isRichSlot
@property (readonly, nonatomic) NSString *slot; // ivar: _slot


+(id)reuseIdentifier;
-(CGFloat)rowHeight;
-(id)_disabledColor;
-(id)_traitCollectionAdjustedIfNeeded;
-(id)initWithSlot:(id)arg0 dateSlot:(BOOL)arg1 isRichSlot:(BOOL)arg2 inFace:(id)arg3 ;
-(void)_updateDetailText;
-(void)_updateLabelFonts;
-(void)_updateState;


@end


#endif