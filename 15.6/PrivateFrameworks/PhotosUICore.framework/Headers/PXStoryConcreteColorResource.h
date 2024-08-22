// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETECOLORRESOURCE_H
#define PXSTORYCONCRETECOLORRESOURCE_H

@class NSString, UIColor;
@protocol PXStoryColorResource;


#import "PXStoryConcreteResource.h"

@interface PXStoryConcreteColorResource : PXStoryConcreteResource <PXStoryColorResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *px_storyResourceColor; // ivar: _color
@property (readonly, nonatomic) NSInteger px_storyResourceColorType; // ivar: _colorType
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithColor:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 kind:(NSInteger)arg1 ;


@end


#endif