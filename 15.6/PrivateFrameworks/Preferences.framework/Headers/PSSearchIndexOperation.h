// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSEARCHINDEXOPERATION_H
#define PSSEARCHINDEXOPERATION_H

@class NSOperation;
@protocol PSSearchIndexOperationDelegate;


#import "PSSearchEntry.h"

@interface PSSearchIndexOperation : NSOperation

@property (weak) NSObject<PSSearchIndexOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PSSearchEntry *searchEntry; // ivar: _searchEntry


+(id)_bundleForSearchEntry:(id)arg0 thirdPartyApp:(*BOOL)arg1 ;
+(id)_loadSearchEntriesFromPlistForEntry:(id)arg0 bundle:(id)arg1 ;
+(id)_loadThirdPartySearchEntriesForEntry:(id)arg0 bundle:(id)arg1 ;
+(id)possibleBundleRoots;
+(id)topLevelManifestBundlePath;
+(void)setPossibleBundleRoots:(id)arg0 ;
+(void)setTopLevelManifestBundlePath:(id)arg0 ;
-(id)initWithSearchEntry:(id)arg0 delegate:(id)arg1 ;
-(void)_cancel;
-(void)_finishedIndexingWithEntries:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)dealloc;
-(void)main;


@end


#endif