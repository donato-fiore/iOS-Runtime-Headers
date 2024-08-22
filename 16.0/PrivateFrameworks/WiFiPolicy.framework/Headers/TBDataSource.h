// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBDATASOURCE_H
#define TBDATASOURCE_H

@class NSString;
@protocol TBFetchProvider;

#import <Foundation/Foundation.h>


@interface TBDataSource : NSObject <TBFetchProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(void)executeFetchRequest:(id)arg0 ;
-(void)submitAnalyticsEventForFetchRequest:(id)arg0 duration:(CGFloat)arg1 error:(id)arg2 resultCount:(NSInteger)arg3 ;


@end


#endif