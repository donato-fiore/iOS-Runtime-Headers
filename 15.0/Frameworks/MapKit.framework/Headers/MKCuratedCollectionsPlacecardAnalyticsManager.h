// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKCURATEDCOLLECTIONSPLACECARDANALYTICSMANAGER_H
#define MKCURATEDCOLLECTIONSPLACECARDANALYTICSMANAGER_H

@protocol MKCuratedCollectionsPlacecardAnalytics;

#import <Foundation/Foundation.h>


@interface MKCuratedCollectionsPlacecardAnalyticsManager : NSObject <MKCuratedCollectionsPlacecardAnalytics>

 {
    CollectionsPlacecardEvent _event;
}




-(id)init;
-(void)cleanUp;
-(void)logEvent;
-(void)placecardCollectionTapped:(id)arg0 atIndex:(NSUInteger)arg1 isCurrentlySaved:(BOOL)arg2 ;
-(void)placecardCollectionsScrollBackward;
-(void)placecardCollectionsScrollForward;
-(void)placecardCollectionsSeeAllTapped;
-(void)placecardExploreGuidesButtonTapped;


@end


#endif