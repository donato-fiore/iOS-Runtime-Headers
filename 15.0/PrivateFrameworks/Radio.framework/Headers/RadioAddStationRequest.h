// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIOADDSTATIONREQUEST_H
#define RADIOADDSTATIONREQUEST_H

@class NSDictionary, NSMutableDictionary, NSString;


#import "RadioSyncRequest.h"

@interface RadioAddStationRequest : RadioSyncRequest {
    NSDictionary *_matchDictionary;
    NSInteger _persistentID;
    NSMutableDictionary *_stationDictionary;
    NSString *_stationHashForSkipHistoryCopying;
}




-(id)changeList;
-(id)init;
-(id)initWithLibraryTrackDictionary:(id)arg0 useArtist:(BOOL)arg1 ;
-(id)initWithQueryTerm:(id)arg0 queryID:(NSInteger)arg1 ;
-(id)initWithRadioTrackDictionary:(id)arg0 useArtist:(BOOL)arg1 ;
-(id)initWithStation:(id)arg0 ;
-(id)initWithStationDictionary:(id)arg0 ;
-(id)matchDictionary;
-(void)startWithAddStationCompletionHandler:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif