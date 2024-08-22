// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSAMEDOCUMENTNAVIGATIONTOHISTORYVISITCORRELATOR_H
#define WBSSAMEDOCUMENTNAVIGATIONTOHISTORYVISITCORRELATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WBSSameDocumentNavigationToHistoryVisitCorrelator : NSObject {
    NSMutableArray *_visits;
}




-(id)init;
-(id)visitForSameDocumentNavigationToURL:(id)arg0 ;
-(void)noteVisit:(id)arg0 ;


@end


#endif