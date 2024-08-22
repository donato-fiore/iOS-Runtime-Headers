// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKSIRIINTERACTION_H
#define MKSIRIINTERACTION_H

@class GEOSearchCategory, NSString;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKSiriInteraction : NSObject

@property (nonatomic) int action; // ivar: _action
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) int resultIndex; // ivar: _resultIndex
@property (retain, nonatomic) GEOSearchCategory *searchCategory; // ivar: _searchCategory
@property (retain, nonatomic) NSString *searchQueryString; // ivar: _searchQueryString
@property (nonatomic) int target; // ivar: _target


+(id)_siriIntentMurmurHash:(id)arg0 ;
+(id)navigationHash;
+(void)generateHashForNavigationURL:(id)arg0 ;
+(void)removeRecentIntentWithPlacemark:(id)arg0 ;
+(void)removeRecentIntentWithSearchText:(id)arg0 ;
+(void)setNavigationHash:(id)arg0 ;
-(BOOL)_isIntentDeletable;
-(BOOL)_isStartNavigationAction:(int)arg0 ;
-(BOOL)_isValidTargetForNavUI:(int)arg0 ;
-(id)_siriIntentHash:(id)arg0 ;
-(id)_whiteListedBrowseCategoryActionAsString:(int)arg0 ;
-(id)_whiteListedNavigationActionAsString:(int)arg0 ;
-(id)_whiteListedPlaceCardActionAsString:(int)arg0 ;
-(id)_whiteListedSearchActionAsString:(int)arg0 ;
-(id)_whiteListedSiriListActionAsString:(int)arg0 ;
-(id)initWithGEOUIAction:(int)arg0 target:(int)arg1 mapItem:(id)arg2 resultIndex:(int)arg3 searchCategory:(id)arg4 searchQueryString:(id)arg5 ;
-(id)intentIfWanted;
-(void)_navTimerFired:(id)arg0 ;
-(void)donateIfWanted;


@end


#endif