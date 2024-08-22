// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNSLIDELAYOUTPRINTHELPER_H
#define KNSLIDELAYOUTPRINTHELPER_H

@class NSArray;
@protocol KNSlideLayoutPrintHelperDataSource;

#import <Foundation/Foundation.h>

#import "KNPrintSegment.h"
#import "KNRenderingExporter.h"
#import "KNSlideNode.h"

@interface KNSlideLayoutPrintHelper : NSObject {
    NSArray *_segments;
    KNPrintSegment *_currentSegment;
    KNRenderingExporter *_renderingExporter;
}


@property (readonly, nonatomic) NSUInteger buildIndex;
@property (readonly, nonatomic) NSInteger commentsPageIndex;
@property (weak, nonatomic) NSObject<KNSlideLayoutPrintHelperDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSUInteger notesIndex;
@property (readonly, nonatomic) NSUInteger notesPageIndex;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) BOOL shouldDrawSlide;
@property (readonly, nonatomic) KNSlideNode *slideNode;


-(BOOL)incrementPage;
-(id)initWithRenderingExporter:(id)arg0 ;
-(id)p_segmentsForSlideNode:(id)arg0 ;
-(void)p_segmentSlideNodes;
-(void)resetPage;
-(void)setCurrentSlideNode:(id)arg0 ;


@end


#endif