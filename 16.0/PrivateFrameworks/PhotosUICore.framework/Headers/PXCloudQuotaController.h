// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCLOUDQUOTACONTROLLER_H
#define PXCLOUDQUOTACONTROLLER_H

@class UIView;
@protocol PXCloudQuotaControllerDelegate;

#import <Foundation/Foundation.h>


@interface PXCloudQuotaController : NSObject

@property (weak, nonatomic) NSObject<PXCloudQuotaControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *informationView; // ivar: _informationView


-(id)init;
-(id)presentingViewControllerForInformationView;


@end


#endif