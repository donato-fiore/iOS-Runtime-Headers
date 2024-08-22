// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDOPERATIONDATASOURCE_H
#define HMDBACKGROUNDOPERATIONDATASOURCE_H

@class NSString;
@protocol HMDBackgroundOperationDataSource;

#import <Foundation/Foundation.h>


@interface HMDBackgroundOperationDataSource : NSObject <HMDBackgroundOperationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)timeIntervalSinceNowToDate:(id)arg0 ;
-(id)currentDate;
-(id)dateWithTimeIntervalSinceNow:(CGFloat)arg0 ;


@end


#endif