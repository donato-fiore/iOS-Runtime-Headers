// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUCURATEDCOLLECTIONSPLACECARDANALYTICSMANAGER_H
#define MUCURATEDCOLLECTIONSPLACECARDANALYTICSMANAGER_H

@class NSString;
@protocol MUCuratedCollectionsPlacecardAnalytics;

#import <Foundation/Foundation.h>


@interface MUCuratedCollectionsPlacecardAnalyticsManager : NSObject <MUCuratedCollectionsPlacecardAnalytics>

 {
    CollectionsPlacecardEvent _event;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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