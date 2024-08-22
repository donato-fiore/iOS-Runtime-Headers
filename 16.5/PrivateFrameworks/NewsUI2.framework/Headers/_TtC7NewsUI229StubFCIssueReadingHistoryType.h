// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI229STUBFCISSUEREADINGHISTORYTYPE_H
#define _TTC7NEWSUI229STUBFCISSUEREADINGHISTORYTYPE_H

@class SwiftObject, NSArray, NSString;
@protocol FCIssueReadingHistoryType;



@interface _TtC7NewsUI229StubFCIssueReadingHistoryType : SwiftObject <FCIssueReadingHistoryType>



@property (nonatomic, readonly) NSArray *allEngagedIssueIDs;
@property (nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
@property (nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property (nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;


-(BOOL)hasIssueWithIDBeenBadged:(id)arg0 ;
-(BOOL)hasIssueWithIDBeenEngaged:(id)arg0 ;
-(BOOL)hasIssueWithIDBeenSeen:(id)arg0 ;
-(BOOL)hasIssueWithIDBeenVisited:(id)arg0 ;
-(id)bookmarkForLastVisitToIssueWithID:(id)arg0 ;
-(id)lastEngagedDateForIssueWithID:(id)arg0 ;
-(id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg0 ;
-(id)lastSeenDateForIssueWithID:(id)arg0 ;
-(id)lastVisitedDateForIssueWithID:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)markIssueAsBadgedWithID:(id)arg0 ;
-(void)markIssueAsEngagedWithID:(id)arg0 ;
-(void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg0 ;
-(void)markIssueAsSeenWithID:(id)arg0 ;
-(void)markIssueWithID:(id)arg0 asVisitedWithBookmark:(id)arg1 ;
-(void)prepareForUseWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif