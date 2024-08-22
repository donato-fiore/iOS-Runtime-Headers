// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSOPENSEARCHSCHEMAFETCHER_H
#define WBSOPENSEARCHSCHEMAFETCHER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface WBSOpenSearchSchemaFetcher : NSObject {
    NSMutableSet *_openSearchDescriptionURLs;
}




+(id)sharedFetcher;
-(void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg0 ;
-(void)fetchOpenSearchDescriptionWithURL:(id)arg0 ;


@end


#endif