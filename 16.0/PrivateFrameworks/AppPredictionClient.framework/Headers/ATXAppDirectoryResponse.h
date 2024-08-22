// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPDIRECTORYRESPONSE_H
#define ATXAPPDIRECTORYRESPONSE_H

@class NSMutableDictionary, NSError, NSArray, ATXSuggestionLayout;

#import <Foundation/Foundation.h>

#import "ATXResponse.h"

@interface ATXAppDirectoryResponse : NSObject {
    NSMutableDictionary *_bundleIdToSuggestionMapping;
}


@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *predictedApps; // ivar: _predictedApps
@property (readonly, nonatomic) NSArray *recentApps; // ivar: _recentApps
@property (readonly, nonatomic) NSArray *recentAppsVisible;
@property (readonly, nonatomic) ATXResponse *response; // ivar: _response
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout; // ivar: _suggestionLayout


-(id)initWithResponse:(id)arg0 recentApps:(id)arg1 otherAppsOnScreen:(id)arg2 numAppsToPredict:(NSUInteger)arg3 error:(id)arg4 ;
-(id)initWithSuggestionLayout:(id)arg0 recentApps:(id)arg1 otherAppsOnScreen:(id)arg2 numAppsToPredict:(NSUInteger)arg3 error:(id)arg4 ;
-(id)initWithoutDedupingForRecents:(id)arg0 predictedApps:(id)arg1 error:(id)arg2 ;
-(id)proactiveSuggestionForBundleId:(id)arg0 ;
-(id)uuidForBundleId:(id)arg0 ;
-(id)uuidsForBundleIds:(id)arg0 ;


@end


#endif