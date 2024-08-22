// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMULTIPLETRANSFORMITEMPROVIDER_H
#define HFMULTIPLETRANSFORMITEMPROVIDER_H

@class NSMutableDictionary;


#import "HFItemProvider.h"

@interface HFMultipleTransformItemProvider : HFItemProvider

@property (readonly, nonatomic) HFItemProvider *sourceProvider; // ivar: _sourceProvider
@property (copy, nonatomic) id *transformationBlock; // ivar: _transformationBlock
@property (retain, nonatomic) NSMutableDictionary *transformedItems; // ivar: _transformedItems


-(id)_subclass_transformItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSourceProvider:(id)arg0 ;
-(id)initWithSourceProvider:(id)arg0 multipleTransformationBlock:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif