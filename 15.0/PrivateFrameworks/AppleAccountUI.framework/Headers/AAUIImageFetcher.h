// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIIMAGEFETCHER_H
#define AAUIIMAGEFETCHER_H

@class NSURLSession;

#import <Foundation/Foundation.h>


@interface AAUIImageFetcher : NSObject {
    NSURLSession *_urlSession;
}




+(id)sharedImageFetcher;
-(id)_urlSession;
-(void)fetchImageAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif