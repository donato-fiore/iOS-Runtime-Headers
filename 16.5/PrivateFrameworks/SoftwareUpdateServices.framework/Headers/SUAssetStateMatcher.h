// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUASSETSTATEMATCHER_H
#define SUASSETSTATEMATCHER_H

@class NSString, NSDictionary;
@protocol SUAssetMatcher;

#import <Foundation/Foundation.h>


@interface SUAssetStateMatcher : NSObject <SUAssetMatcher>



@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int interestedStates; // ivar: _interestedStates
@property (readonly, nonatomic) NSDictionary *matcherInfo; // ivar: _matcherInfo
@property (readonly) Class superclass;


-(BOOL)_matchesFilterType:(id)arg0 ;
-(id)_findMatchFromCandidates:(id)arg0 error:(*id)arg1 ;
-(id)findMatchFromCandidates:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(id)arg0 interestedStates:(int)arg1 ;
-(void)_modifyMADownloadOptions:(id)arg0 ;
-(void)modifyMADownloadOptions:(id)arg0 ;


@end


#endif