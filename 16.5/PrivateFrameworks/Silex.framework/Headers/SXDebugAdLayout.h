// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDEBUGADLAYOUT_H
#define SXDEBUGADLAYOUT_H

@class NSString;
@protocol SXAutoPlacementLayout, SXEdgeSpacing;

#import <Foundation/Foundation.h>


@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXEdgeSpacing> *margin; // ivar: _margin
@property (readonly) Class superclass;


-(id)initWithMargin:(struct _SXConvertibleValue )arg0 ;


@end


#endif