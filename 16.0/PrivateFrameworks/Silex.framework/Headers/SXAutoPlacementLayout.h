// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXAUTOPLACEMENTLAYOUT_H
#define SXAUTOPLACEMENTLAYOUT_H

@class NSString;
@protocol SXAutoPlacementLayout, SXEdgeSpacing;


#import "SXJSONObject.h"

@interface SXAutoPlacementLayout : SXJSONObject <SXAutoPlacementLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXEdgeSpacing> *margin;
@property (readonly) Class superclass;


-(id)marginWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif