// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSTATICITEM_H
#define HFSTATICITEM_H

@class NSDictionary;
@protocol NSCopying;


#import "HFItem.h"

@interface HFStaticItem : HFItem <NSCopying>



@property (copy, nonatomic) id *resultsBlock; // ivar: _resultsBlock
@property (retain, nonatomic) NSDictionary *staticResults; // ivar: _staticResults


+(id)emptyItem;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithResults:(id)arg0 ;
-(id)initWithResultsBlock:(id)arg0 ;


@end


#endif