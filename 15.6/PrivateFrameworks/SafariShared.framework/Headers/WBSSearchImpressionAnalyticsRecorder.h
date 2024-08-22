// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSEARCHIMPRESSIONANALYTICSRECORDER_H
#define WBSSEARCHIMPRESSIONANALYTICSRECORDER_H

@class WBSSearchProvider, NSArray;

#import <Foundation/Foundation.h>


@interface WBSSearchImpressionAnalyticsRecorder : NSObject

@property (retain, nonatomic) WBSSearchProvider *defaultSearchProvider; // ivar: _defaultSearchProvider
@property (copy, nonatomic) NSArray *searchProviders; // ivar: _searchProviders


+(id)sharedRecorder;
-(id)init;
-(id)searchProviderForURL:(id)arg0 ;
-(void)didActualizeImpressionForURL:(id)arg0 provenance:(NSInteger)arg1 ;


@end


#endif