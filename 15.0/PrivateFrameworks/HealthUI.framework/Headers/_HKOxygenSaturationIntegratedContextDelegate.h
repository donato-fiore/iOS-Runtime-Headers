// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKOXYGENSATURATIONINTEGRATEDCONTEXTDELEGATE_H
#define _HKOXYGENSATURATIONINTEGRATEDCONTEXTDELEGATE_H

@class NSString;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

#import <Foundation/Foundation.h>

#import "HKLineSeries.h"
#import "HKInteractiveChartOverlayNamedDataSource.h"
#import "HKDisplayType.h"

@interface _HKOxygenSaturationIntegratedContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate>



@property (readonly, nonatomic) HKLineSeries *alternateLineSeries;
@property (retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource; // ivar: _cacheDataSource
@property (nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayType *primaryDisplayType; // ivar: _primaryDisplayType
@property (readonly) Class superclass;


-(id)_statItemForTimeScope:(NSInteger)arg0 ;
-(id)formatterForTimescope:(NSInteger)arg0 ;
-(id)initWithCustomDataSource:(id)arg0 primaryDisplayType:(id)arg1 context:(NSUInteger)arg2 ;


@end


#endif