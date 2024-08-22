// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOENRICHMENTDATAENTITY_H
#define GEOENRICHMENTDATAENTITY_H

@class NSArray, NSString, NSData;

#import <Foundation/Foundation.h>

#import "GEOPDEnrichmentDataEntity.h"
#import "GEOEnrichmentInfo.h"

@interface GEOEnrichmentDataEntity : NSObject {
    GEOPDEnrichmentDataEntity *_enrichmentDataEntity;
}


@property (readonly, nonatomic) NSArray *appAdamIds; // ivar: _appAdamIds
@property (readonly, nonatomic) NSString *enrichmentHtml; // ivar: _enrichmentHtml
@property (readonly, nonatomic) GEOEnrichmentInfo *enrichmentInfo; // ivar: _enrichmentInfo
@property (readonly, nonatomic) NSData *enrichmentMetadata; // ivar: _enrichmentMetadata


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithEnrichmentDataEntity:(id)arg0 ;


@end


#endif