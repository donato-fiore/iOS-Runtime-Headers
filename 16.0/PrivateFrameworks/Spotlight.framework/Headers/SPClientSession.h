// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCLIENTSESSION_H
#define SPCLIENTSESSION_H

@class NSArray, SPSearchQueryContext;

#import <Foundation/Foundation.h>


@interface SPClientSession : NSObject {
    NSArray *_searchDomains;
    BOOL _observersAdded;
    int _prefsToken;
    NSInteger _contentFilter;
}


@property (retain) SPSearchQueryContext *currentQueryContext; // ivar: _currentQueryContext
@property (readonly) NSArray *disabledBundleIds;
@property (nonatomic) BOOL infinitePatience; // ivar: _infinitePatience
@property NSInteger maxUISuggestions; // ivar: _maxUISuggestions


+(void)initialize;
+(void)retrieveFirstTimeExperienceTextWithReply:(id)arg0 ;
-(BOOL)_setSearchDomains:(id)arg0 ;
-(NSInteger)contentFilters;
-(id)init;
-(id)queryTaskWithContext:(id)arg0 ;
-(void)activate;
-(void)deactivate;
-(void)finishRanking:(id)arg0 blendingDuration:(CGFloat)arg1 ;
-(void)preheat;


@end


#endif