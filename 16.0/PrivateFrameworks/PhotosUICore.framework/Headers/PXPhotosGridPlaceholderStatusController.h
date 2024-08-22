// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSGRIDPLACEHOLDERSTATUSCONTROLLER_H
#define PXPHOTOSGRIDPLACEHOLDERSTATUSCONTROLLER_H

@class NSString, NSAttributedString;

#import <Foundation/Foundation.h>

#import "PXStatusController.h"
#import "PXCPLUIStatusProvider.h"
#import "PXCPLStatusController.h"

@interface PXPhotosGridPlaceholderStatusController : NSObject {
    BOOL _presentCPLStatus;
    NSString *_fallbackTitle;
    NSAttributedString *_fallbackAttributedMessage;
    PXStatusController *_statusController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCPLStatusController *_cplStatusController;
}


@property (readonly, nonatomic) PXStatusController *statusController;


-(id)_createCPLUIStatusProvider;
-(id)init;
-(id)initForPresentingCPLStatus:(BOOL)arg0 fallbackTitle:(id)arg1 fallbackAttributedMessage:(id)arg2 ;
-(void)_refreshCPLUIStatusProvider;
-(void)_systemPhotoLibraryDidChange;
-(void)setCplUIStatusProvider:(id)arg0 ;


@end


#endif