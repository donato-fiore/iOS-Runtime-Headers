// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOFACTOID_H
#define GEOFACTOID_H

@class NSString;
@protocol GEOFactoid;

#import <Foundation/Foundation.h>

#import "GEOPDFactoid.h"
#import "GEOMapItemIdentifier.h"

@interface GEOFactoid : NSObject <GEOFactoid>

 {
    GEOPDFactoid *_factoid;
}


@property (readonly, nonatomic) BOOL canBeDisplayedInPlaceSummary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOMapItemIdentifier *placeIdentifier;
@property (readonly, nonatomic) int semantic;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) int unitType;
@property (readonly, nonatomic) NSString *unstructuredValue;
@property (readonly, nonatomic, getter=shouldUseStructuredData) BOOL useStructuredData;
@property (readonly, nonatomic) CGFloat value;


-(id)initWithFactoid:(id)arg0 ;


@end


#endif