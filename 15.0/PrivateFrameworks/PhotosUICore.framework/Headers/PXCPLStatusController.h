// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCPLSTATUSCONTROLLER_H
#define PXCPLSTATUSCONTROLLER_H

@class NSString;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PXStatusViewModel.h"
#import "PXCPLUIStatusProvider.h"

@interface PXCPLStatusController : NSObject <PXChangeObserver>

 {
    PXStatusViewModel *_viewModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *fallbackAction; // ivar: _fallbackAction
@property (copy, nonatomic) NSString *fallbackActionTitle; // ivar: _fallbackActionTitle
@property (copy, nonatomic) NSString *fallbackMessage; // ivar: _fallbackMessage
@property (copy, nonatomic) NSString *fallbackTitle; // ivar: _fallbackTitle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXCPLUIStatusProvider *statusProvider; // ivar: _statusProvider
@property (readonly) Class superclass;


-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif