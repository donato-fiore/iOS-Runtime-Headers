// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKAVATARIMAGEBRUSH_H
#define GKAVATARIMAGEBRUSH_H

@class NSString;
@protocol GKBrushIdentification;


#import "GKImageBrush.h"

@interface GKAvatarImageBrush : GKImageBrush <GKBrushIdentification>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dimension; // ivar: _dimension
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)renderedImageIdentifier;


@end


#endif