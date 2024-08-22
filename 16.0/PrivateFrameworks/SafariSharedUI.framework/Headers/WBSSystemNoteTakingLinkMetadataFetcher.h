// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSYSTEMNOTETAKINGLINKMETADATAFETCHER_H
#define WBSSYSTEMNOTETAKINGLINKMETADATAFETCHER_H


#import <Foundation/Foundation.h>


@interface WBSSystemNoteTakingLinkMetadataFetcher : NSObject



+(id)sharedFetcher;
-(id)linkContextPreviewForMetadata:(id)arg0 image:(id)arg1 selectedText:(id)arg2 ;
-(void)fetchMetadataForWebView:(id)arg0 completion:(id)arg1 ;


@end


#endif