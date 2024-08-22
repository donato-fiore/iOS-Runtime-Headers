// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDTHERMALSTATUSPROVIDER_H
#define SBDASHBOARDTHERMALSTATUSPROVIDER_H

@class NSString;
@protocol CSThermalStatusProviding;

#import <Foundation/Foundation.h>

#import "SBThermalController.h"

@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding>

 {
    SBThermalController *_thermalController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger thermalStatus;


-(id)init;
-(id)initWithThermalController:(id)arg0 ;


@end


#endif