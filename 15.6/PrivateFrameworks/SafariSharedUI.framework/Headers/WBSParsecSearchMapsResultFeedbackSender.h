// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECSEARCHMAPSRESULTFEEDBACKSENDER_H
#define WBSPARSECSEARCHMAPSRESULTFEEDBACKSENDER_H

@class NSString;
@protocol _MKPlaceViewControllerFeedbackDelegate, WBSParsecSearchResultPresentedInCard><WBSCompletionListItem;

#import <Foundation/Foundation.h>


@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate>

 {
    NSInteger _queryID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> *searchResult; // ivar: _searchResult
@property (readonly) Class superclass;


-(id)initWithSearchResult:(id)arg0 ;
-(void)placeViewController:(id)arg0 shouldLogFeedbackOfType:(int)arg1 ;


@end


#endif