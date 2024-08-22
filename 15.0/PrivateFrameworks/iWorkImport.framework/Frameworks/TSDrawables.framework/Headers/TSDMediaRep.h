// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMEDIAREP_H
#define TSDMEDIAREP_H

@class NSString;
@protocol CALayerDelegate;


#import "TSDStyledRep.h"
#import "TSDFrameRep.h"
#import "TSDMediaInfo.h"
#import "TSDMediaLayout.h"

@interface TSDMediaRep : TSDStyledRep <CALayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSDFrameRep *frameRep; // ivar: mFrameRep
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDMediaInfo *mediaInfo;
@property (readonly, nonatomic) TSDMediaLayout *mediaLayout;
@property (readonly) Class superclass;


-(BOOL)i_shouldRenderStroke:(id)arg0 ;
-(BOOL)isPlaceholder;
-(void)dealloc;
-(void)updateFrameRep;
-(void)willBeRemoved;


@end


#endif