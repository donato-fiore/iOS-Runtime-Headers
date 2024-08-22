// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTRANSFORMITEMPROVIDER_H
#define HFTRANSFORMITEMPROVIDER_H

@class NSMutableDictionary;


#import "HFItemProvider.h"

@interface HFTransformItemProvider : HFItemProvider

@property (retain, nonatomic) HFItemProvider *sourceProvider; // ivar: _sourceProvider
@property (copy, nonatomic) id *transformationBlock; // ivar: _transformationBlock
@property (retain, nonatomic) NSMutableDictionary *transformedItems; // ivar: _transformedItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSourceProvider:(id)arg0 transformationBlock:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif