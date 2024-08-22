// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTILEDBSUBSCRIPTIONMETADATA_H
#define GEOTILEDBSUBSCRIPTIONMETADATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOTileDBSubscriptionMetadata : NSObject {
    NSArray *_dataStates;
}


@property (readonly, nonatomic) NSUInteger associatedDataCount; // ivar: _associatedDataCount
@property (readonly, nonatomic) NSUInteger associatedDataSize; // ivar: _associatedDataSize


-(BOOL)isFullyLoadedForDataType:(unsigned int)arg0 dataSubtype:(unsigned int)arg1 version:(NSUInteger)arg2 ;
-(id)initWithDataCount:(NSUInteger)arg0 dataSize:(NSUInteger)arg1 dataStates:(id)arg2 ;


@end


#endif