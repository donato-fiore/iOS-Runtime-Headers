// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSRATINGSPROVIDERRESULT_H
#define AMSRATINGSPROVIDERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AMSRatingsProviderResult : NSObject

@property (readonly, nonatomic) NSArray *ratingsStoreFronts; // ivar: _ratingsStoreFronts


-(NSUInteger)_ratingInfoMediaTypeForTaskMediaType:(NSUInteger)arg0 ;
-(id)_mapRatingsDictionaries:(id)arg0 withMediaType:(NSUInteger)arg1 andStoreFront:(id)arg2 ;
-(id)initWithData:(id)arg0 mediaType:(NSUInteger)arg1 andStoreFront:(id)arg2 ;
-(id)initWithDictionaries:(id)arg0 mediaType:(NSUInteger)arg1 andStoreFront:(id)arg2 ;
-(id)initWithURLResult:(id)arg0 mediaType:(NSUInteger)arg1 andStoreFront:(id)arg2 ;


@end


#endif