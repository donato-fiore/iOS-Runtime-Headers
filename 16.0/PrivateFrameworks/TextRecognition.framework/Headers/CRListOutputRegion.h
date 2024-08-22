// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLISTOUTPUTREGION_H
#define CRLISTOUTPUTREGION_H

@class NSString, NSArray;
@protocol CROutputRegionLayoutContributing;


#import "CRCompositeOutputRegion.h"

@interface CRListOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *items;
@property (readonly) Class superclass;


+(id)listsWithParagraphs:(id)arg0 ;
-(NSUInteger)type;
-(id)initWithListItems:(id)arg0 ;
-(id)layoutComponents;
-(id)regionsSuitableForDataDetectorOutput;


@end


#endif