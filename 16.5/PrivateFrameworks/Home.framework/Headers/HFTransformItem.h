// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTRANSFORMITEM_H
#define HFTRANSFORMITEM_H

@protocol NSCopying;


#import "HFItem.h"

@interface HFTransformItem : HFItem <NSCopying>



@property (copy, nonatomic) id *optionsTransformBlock; // ivar: _optionsTransformBlock
@property (copy, nonatomic) id *resultsTransformBlock; // ivar: _resultsTransformBlock
@property (retain, nonatomic) HFItem *sourceItem; // ivar: _sourceItem
@property (nonatomic, readonly) HFItem *transformedSourceItem;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSourceItem:(id)arg0 resultKeyExclusionFilter:(id)arg1 ;
-(id)initWithSourceItem:(id)arg0 resultKeyFilter:(id)arg1 ;
-(id)initWithSourceItem:(id)arg0 transformationBlock:(id)arg1 ;
// -(id)initWithSourceItem:(id)arg0 updateOptionsTransformBlock:(id)arg1 resultsTransformBlock:(unk)arg2  ;


@end


#endif