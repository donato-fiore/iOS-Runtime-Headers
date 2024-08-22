// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKFACTOID_H
#define _MKFACTOID_H

@class NSString, GEOMapItemIdentifier;
@protocol GEOFactoid;

#import <Foundation/Foundation.h>


@interface _MKFactoid : NSObject <GEOFactoid>



@property (readonly, nonatomic) BOOL canBeDisplayedInPlaceSummary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOMapItemIdentifier *placeIdentifier;
@property (readonly, nonatomic) int semantic;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) int unitType;
@property (readonly, nonatomic) NSString *unstructuredValue; // ivar: _unstructuredValue
@property (readonly, nonatomic, getter=shouldUseStructuredData) BOOL useStructuredData;
@property (readonly, nonatomic) CGFloat value;


-(id)initWithDictionary:(id)arg0 ;
-(id)placeSummaryFactoids;


@end


#endif