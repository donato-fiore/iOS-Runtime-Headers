// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCOLLABORATIONATTRIBUTIONVIEWDRAWING_H
#define SLDCOLLABORATIONATTRIBUTIONVIEWDRAWING_H

@class NSString, UISSlotStyle;
@protocol UISDrawing;

#import <Foundation/Foundation.h>

#import "SLDCollaborationAttributionViewSlotTag.h"

@interface SLDCollaborationAttributionViewDrawing : NSObject <UISDrawing>



@property (readonly, nonatomic) CGRect alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize drawingSize;
@property (nonatomic) BOOL forRemote; // ivar: _forRemote
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (retain, nonatomic) UISSlotStyle *slotStyle; // ivar: _slotStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) SLDCollaborationAttributionViewSlotTag *tag; // ivar: _tag


-(id)initWithStyle:(id)arg0 tag:(id)arg1 forRemote:(BOOL)arg2 ;
-(void)drawInContext:(struct CGContext *)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif