// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSREALMAPSSYNCCONNECTOR_H
#define MAPSSUGGESTIONSREALMAPSSYNCCONNECTOR_H

@class _TtC8MapsSync24MapsSyncHistoryItemQuery, _TtC8MapsSync34MapsSyncCollectionTransitItemQuery, _TtC8MapsSync25MapsSyncFavoriteItemQuery, NSString;
@protocol _TtP8MapsSync25MapsSyncDataQueryDelegate_, MapsSuggestionsMapsSyncConnector, MapsSuggestionsMapsSyncConnectorDelegate;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRealMapsSyncConnector : NSObject <_TtP8MapsSync25MapsSyncDataQueryDelegate_, MapsSuggestionsMapsSyncConnector>

 {
    id<MapsSuggestionsMapsSyncConnectorDelegate> *_delegate;
    _TtC8MapsSync24MapsSyncHistoryItemQuery *_historyQuery;
    _TtC8MapsSync34MapsSyncCollectionTransitItemQuery *_transitItemQuery;
    _TtC8MapsSync25MapsSyncFavoriteItemQuery *_favoriteItemQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MapsSuggestionsMapsSyncConnectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)allContentOfType:(NSInteger)arg0 handler:(id)arg1 ;
-(id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg0 ;
-(id)init;
-(id)newReviewedPlace;
-(void)queryContentsDidChangeWithQuery:(id)arg0 ;


@end


#endif