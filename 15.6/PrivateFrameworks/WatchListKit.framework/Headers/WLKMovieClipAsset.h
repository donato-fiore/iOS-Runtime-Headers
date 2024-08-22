// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKMOVIECLIPASSET_H
#define WLKMOVIECLIPASSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKMovieClipAsset : NSObject

@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *durationString;
@property (readonly, copy, nonatomic) NSString *flavor; // ivar: _flavor
@property (readonly, copy, nonatomic) NSString *url; // ivar: _url


+(id)movieClipAssetsWithArray:(id)arg0 ;
-(id)_init;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif