// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDPLACEHOLDERSTATUSCONTROLLER_H
#define PXPHOTOSGRIDPLACEHOLDERSTATUSCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PXStatusView.h"
#import "PXCPLUIStatusProvider.h"
#import "PXCPLStatusController.h"

@interface PXPhotosGridPlaceholderStatusController : NSObject {
    BOOL _presentCPLStatus;
    NSString *_fallbackTitle;
    NSString *_fallbackMessage;
    PXStatusView *_statusView;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCPLStatusController *_statusController;
}


@property (readonly, nonatomic) PXStatusView *statusView;


-(id)_createCPLUIStatusProvider;
-(id)init;
-(id)initForPresentingCPLStatus:(BOOL)arg0 fallbackTitle:(id)arg1 fallbackMessage:(id)arg2 ;
-(void)_refreshCPLUIStatusProvider;
-(void)_systemPhotoLibraryDidChange;
-(void)setCplUIStatusProvider:(id)arg0 ;


@end


#endif