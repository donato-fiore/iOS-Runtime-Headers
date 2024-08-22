// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGYEARENRICHMENTRULE_H
#define PGYEARENRICHMENTRULE_H

@class NSString;
@protocol PGHighlightItemEnrichmentRule, OS_os_log, PGHighlightItemModelReader;

#import <Foundation/Foundation.h>


@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) NSObject<PGHighlightItemModelReader> *modelReader; // ivar: _modelReader
@property (readonly) Class superclass;


-(CGFloat)promotionScoreForHighlightItemList:(id)arg0 ;
-(id)initWithModelReader:(id)arg0 loggingConnection:(id)arg1 ;
-(id)keyAssetForHighlightItemList:(id)arg0 sharingFilter:(unsigned short)arg1 ;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg0 sharingFilter:(unsigned short)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(id)arg4 ;


@end


#endif