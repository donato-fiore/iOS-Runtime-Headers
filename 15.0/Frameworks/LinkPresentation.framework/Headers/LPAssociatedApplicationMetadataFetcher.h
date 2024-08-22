// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPASSOCIATEDAPPLICATIONMETADATAFETCHER_H
#define LPASSOCIATEDAPPLICATIONMETADATAFETCHER_H

@class NSURL, NSString;


#import "LPFetcher.h"

@interface LPAssociatedApplicationMetadataFetcher : LPFetcher {
    id *_completionHandler;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(void)_completedWithClipMetadata:(id)arg0 iconURL:(id)arg1 error:(id)arg2 ;
-(void)_failedWithErrorCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
-(void)cancel;
-(void)fetchWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif