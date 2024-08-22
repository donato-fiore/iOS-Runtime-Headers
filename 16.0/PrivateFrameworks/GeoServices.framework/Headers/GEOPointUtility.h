// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPOINTUTILITY_H
#define GEOPOINTUTILITY_H


#import <Foundation/Foundation.h>


@interface GEOPointUtility : NSObject



+(*void)controlPoints:(id)arg0 usesZilch:(BOOL)arg1 ;
+(NSUInteger)pointCount:(id)arg0 usesZilch:(BOOL)arg1 ;
+(id)compressedZilchDataFromPoints:(*void)arg0 fromPointIndex:(NSUInteger)arg1 pointCount:(NSUInteger)arg2 ;
+(id)debugDescriptionForCompressedZilchData:(id)arg0 ;
+(id)subdataFromPointData:(id)arg0 fromPointIndex:(NSUInteger)arg1 usesZilch:(BOOL)arg2 ;
+(id)unpackBasicPoints:(id)arg0 ;
+(id)unpackPoints:(id)arg0 usesZilch:(BOOL)arg1 ;
+(id)unpackZilchPoints:(id)arg0 ;
+(struct ? )pointAt:(NSUInteger)arg0 pointData:(id)arg1 usesZilch:(BOOL)arg2 ;


@end


#endif