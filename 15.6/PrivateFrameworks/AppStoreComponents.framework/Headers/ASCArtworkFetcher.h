// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCARTWORKFETCHER_H
#define ASCARTWORKFETCHER_H

@class NSURLSession;

#import <Foundation/Foundation.h>

#import "ASCTaskCoordinator.h"

@interface ASCArtworkFetcher : NSObject

@property (readonly, nonatomic) ASCTaskCoordinator *fetchCoordinator; // ivar: _fetchCoordinator
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(id)sharedFetcher;
-(id)URLWithContentsOfArtwork:(id)arg0 preferredSize:(struct CGSize )arg1 ;
-(id)dataWithContentsOfURL:(id)arg0 ;
-(id)imageForContentsOfArtwork:(id)arg0 withSize:(struct CGSize )arg1 ;
-(id)imageWithContentsOfURL:(id)arg0 ;
-(id)initWithURLSession:(id)arg0 scale:(CGFloat)arg1 ;


@end


#endif