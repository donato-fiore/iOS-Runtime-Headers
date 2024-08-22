// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENREGIONTESTDATASOURCE_H
#define ENREGIONTESTDATASOURCE_H

@class NSString;
@protocol ENRegionMonitorDataSource, ENRegionMonitorSourceDelegate;

#import <Foundation/Foundation.h>


@interface ENRegionTestDataSource : NSObject <ENRegionMonitorDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentRegionVisit;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)regionChanged;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif