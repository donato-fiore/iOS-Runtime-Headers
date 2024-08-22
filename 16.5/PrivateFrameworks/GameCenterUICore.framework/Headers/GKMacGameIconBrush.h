// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMACGAMEICONBRUSH_H
#define GKMACGAMEICONBRUSH_H

@class NSString;
@protocol GKBrushIdentification;


#import "GKImageBrush.h"

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize outputSize; // ivar: _outputSize
@property (readonly) Class superclass;


-(id)renderedImageIdentifier;
-(struct CGSize )sizeForInput:(id)arg0 ;


@end


#endif