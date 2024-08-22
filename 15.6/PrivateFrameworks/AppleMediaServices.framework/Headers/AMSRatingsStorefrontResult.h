// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSRATINGSSTOREFRONTRESULT_H
#define AMSRATINGSSTOREFRONTRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AMSRatingsStorefrontResult : NSObject

@property (readonly, nonatomic) NSArray *ratingsStoreFronts; // ivar: _ratingsStoreFronts


-(NSUInteger)_ratingInfoMediaTypeForTaskMediaType:(NSUInteger)arg0 ;
-(id)_mapRatingsDictionaries:(id)arg0 withMediaType:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 mediaType:(NSUInteger)arg1 ;
-(id)initWithDictionaries:(id)arg0 mediaType:(NSUInteger)arg1 ;
-(id)initWithURLResult:(id)arg0 mediaType:(NSUInteger)arg1 ;


@end


#endif