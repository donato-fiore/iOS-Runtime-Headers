// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGYEARENRICHMENTRULE_H
#define PGYEARENRICHMENTRULE_H

@class NSString;
@protocol PGHighlightItemEnrichmentRule, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly) Class superclass;


-(CGFloat)promotionScoreForHighlightItemList:(id)arg0 ;
-(id)curatedAssetsForHighlightItemList:(id)arg0 contextualKeyAssetByHighlighItemUUID:(id)arg1 ;
-(id)initWithLoggingConnection:(id)arg0 ;
-(id)keyAssetForHighlightItemList:(id)arg0 contextualKeyAssetByHighlighItemUUID:(id)arg1 ;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg0 withGraph:(id)arg1 neighborScoreComputer:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif