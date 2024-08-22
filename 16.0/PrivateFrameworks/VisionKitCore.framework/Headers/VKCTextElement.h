// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCTEXTELEMENT_H
#define VKCTEXTELEMENT_H

@class NSArray;


#import "VKCBaseElement.h"

@interface VKCTextElement : VKCBaseElement

@property (copy, nonatomic) NSArray *_children; // ivar: __children
@property (copy, nonatomic) NSArray *candidates; // ivar: _candidates
@property (nonatomic) BOOL childrenCreated; // ivar: _childrenCreated
@property (copy, nonatomic) NSArray *components; // ivar: _components


+(id)textElementFromCROutputRegion:(id)arg0 parentDocument:(id)arg1 ;
-(BOOL)isInspectableCellSelectable;
-(NSInteger)elementType;
-(id)children;
-(id)confidenceString;
-(id)crOutputRegionTypeString;
-(id)elementCollectionForQuad:(id)arg0 ;
-(void)createChildrenIfNecessary;


@end


#endif