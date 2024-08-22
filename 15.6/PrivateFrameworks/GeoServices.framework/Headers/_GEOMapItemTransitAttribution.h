// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOMAPITEMTRANSITATTRIBUTION_H
#define _GEOMAPITEMTRANSITATTRIBUTION_H

@class NSString, NSArray;
@protocol GEOTransitAttribution;

#import <Foundation/Foundation.h>

#import "GEOPDTransitAttribution.h"

@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution>

 {
    GEOPDTransitAttribution *_transitAttribution;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_providerNames) NSArray *providerNames;
@property (readonly) Class superclass;


-(id)initWithTransitAttribution:(id)arg0 ;


@end


#endif