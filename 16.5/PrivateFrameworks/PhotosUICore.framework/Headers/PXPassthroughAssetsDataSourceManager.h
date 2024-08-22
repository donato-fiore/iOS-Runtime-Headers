// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPASSTHROUGHASSETSDATASOURCEMANAGER_H
#define PXPASSTHROUGHASSETSDATASOURCEMANAGER_H



#import "PXAssetsDataSourceManager.h"

@interface PXPassthroughAssetsDataSourceManager : PXAssetsDataSourceManager



-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)setDataSource:(id)arg0 changeDetails:(id)arg1 ;


@end


#endif