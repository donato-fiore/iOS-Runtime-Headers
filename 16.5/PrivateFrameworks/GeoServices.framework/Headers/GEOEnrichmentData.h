// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOENRICHMENTDATA_H
#define GEOENRICHMENTDATA_H

@class NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GEOPDEnrichmentData.h"

@interface GEOEnrichmentData : NSObject <NSCopying>

 {
    GEOPDEnrichmentData *_enrichmentData;
}


@property (readonly, nonatomic) NSArray *enrichmentEntities; // ivar: _enrichmentEntities
@property (readonly, nonatomic) NSData *placecardEnrichmentMetadata; // ivar: _placecardEnrichmentMetadata


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEnrichmentData:(id)arg0 ;


@end


#endif