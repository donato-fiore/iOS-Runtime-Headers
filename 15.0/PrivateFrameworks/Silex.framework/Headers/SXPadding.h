// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXPADDING_H
#define SXPADDING_H

@class NSString;
@protocol SXEdgeSpacing;


#import "SXJSONObject.h"

@interface SXPadding : SXJSONObject <SXEdgeSpacing>



@property (readonly, nonatomic) _SXConvertibleValue bottom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SXConvertibleValue left;
@property (readonly, nonatomic) _SXConvertibleValue right;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _SXConvertibleValue top;




@end


#endif