// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMOVIECURATIONRESULTS_H
#define VCPMOVIECURATIONRESULTS_H

@class NSMutableArray, PHAsset, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCPMovieCurationResults : NSObject

@property (readonly, retain, nonatomic) NSMutableArray *highlights; // ivar: _highlights
@property (readonly, nonatomic) PHAsset *phAsset; // ivar: _phAsset
@property (retain, nonatomic) NSMutableDictionary *results; // ivar: _results


-(id)initWithPHAsset:(id)arg0 ;


@end


#endif