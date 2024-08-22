// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMULTIPLETRANSFORMITEMPROVIDER_H
#define HFMULTIPLETRANSFORMITEMPROVIDER_H

@class NSMutableDictionary;


#import "HFTransformItemProvider.h"

@interface HFMultipleTransformItemProvider : HFTransformItemProvider

@property (copy, nonatomic) id *transformationBlock; // ivar: _transformationBlock
@property (retain, nonatomic) NSMutableDictionary *transformedItems; // ivar: _transformedItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSourceProvider:(id)arg0 multipleTransformationBlock:(id)arg1 ;
-(id)items;
-(id)reloadItems;


@end


#endif