// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLAYOUTMETRICSCACHE_H
#define TSWPLAYOUTMETRICSCACHE_H

@class NSString;
@protocol TSWPStorageParagraphObserver;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPLayoutMetricsCache : NSObject <TSWPStorageParagraphObserver>

 {
    TSWPStorage *_storage;
    vector<TSWPParagraphMetrics, std::allocator<TSWPParagraphMetrics>> _paragraphMetrics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStorage:(id)arg0 ;
-(struct TSWPParagraphMetrics *)paragraphMetricsForParagraphAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)storage:(id)arg0 didChangeParagraphsInIndexRange:(struct _NSRange )arg1 ;
-(void)storage:(id)arg0 didDeleteParagraphsInIndexRange:(struct _NSRange )arg1 ;
-(void)storage:(id)arg0 didInsertParagraphsInIndexRange:(struct _NSRange )arg1 ;
-(void)tearDown;


@end


#endif