// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREITEMMOVIECLIPASSET_H
#define MPSTOREITEMMOVIECLIPASSET_H

@class NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPStoreItemMovieClipAsset : NSObject

@property (readonly, nonatomic) CGFloat duration;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, copy, nonatomic) NSURL *hlsURL;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary; // ivar: _lookupDictionary
@property (readonly, copy, nonatomic) NSURL *url;


-(id)initWithLookupDictionary:(id)arg0 ;


@end


#endif