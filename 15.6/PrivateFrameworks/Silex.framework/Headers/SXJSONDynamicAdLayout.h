// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXJSONDYNAMICADLAYOUT_H
#define SXJSONDYNAMICADLAYOUT_H

@class NSString;
@protocol SXAutoPlacementLayout, SXEdgeSpacing;


#import "SXJSONObject.h"

@interface SXJSONDynamicAdLayout : SXJSONObject <SXAutoPlacementLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXEdgeSpacing> *margin;
@property (readonly) Class superclass;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;


@end


#endif