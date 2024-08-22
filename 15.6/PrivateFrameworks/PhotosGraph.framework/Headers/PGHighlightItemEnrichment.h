// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHIGHLIGHTITEMENRICHMENT_H
#define PGHIGHLIGHTITEMENRICHMENT_H

@class NSDictionary;
@protocol PGHighlightItemEnrichmentRule;

#import <Foundation/Foundation.h>


@interface PGHighlightItemEnrichment : NSObject

@property (readonly, nonatomic) NSDictionary *contextualKeyAssetByHighlighItemUUID; // ivar: _contextualKeyAssetByHighlighItemUUID
@property (readonly, nonatomic) NSObject<PGHighlightItemEnrichmentRule> *rule; // ivar: _rule


-(id)initWithRule:(id)arg0 contextualKeyAssetByHighlighItemUUID:(id)arg1 ;
-(void)enrichHighlightItemLists:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif