// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMGRIDCONTROLLER_H
#define PXCMMGRIDCONTROLLER_H

@class UIViewController;

#import <Foundation/Foundation.h>

#import "PXMomentShareStatusPresentation.h"
#import "PXCMMStatusController.h"

@interface PXCMMGridController : NSObject {
    PXMomentShareStatusPresentation *_statusPresentation;
    PXCMMStatusController *_statusController;
}


@property (readonly, nonatomic) UIViewController *gridViewController; // ivar: _gridViewController


+(BOOL)useGridZeroForCMMSession:(id)arg0 ;
-(id)init;
-(id)initWithCMMSession:(id)arg0 enableDismissAction:(BOOL)arg1 assetActionManager:(id)arg2 assetCollectionActionManager:(id)arg3 performerDelegate:(id)arg4 photosViewConfigurationBlock:(id)arg5 ;


@end


#endif