// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOENRICHMENTINFO_H
#define GEOENRICHMENTINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDEnrichmentInfo.h"

@interface GEOEnrichmentInfo : NSObject {
    GEOPDEnrichmentInfo *_enrichmentInfo;
}


@property (readonly, nonatomic) NSString *showcaseId; // ivar: _showcaseId
@property (readonly, nonatomic) NSString *sourceId; // ivar: _sourceId
@property (readonly, nonatomic) NSString *sourceName; // ivar: _sourceName


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithEnrichmentInfo:(id)arg0 ;
-(id)pdEnrichmentInfo;


@end


#endif