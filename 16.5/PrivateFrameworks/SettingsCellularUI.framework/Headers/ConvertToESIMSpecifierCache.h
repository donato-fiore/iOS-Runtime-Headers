// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONVERTTOESIMSPECIFIERCACHE_H
#define CONVERTTOESIMSPECIFIERCACHE_H

@class NSString, TSSIMSetupFlow, UINavigationController;
@protocol TSSIMSetupDelegate, PSUILocalConvertModelDelegate;

#import <Foundation/Foundation.h>


@interface ConvertToESIMSpecifierCache : NSObject <TSSIMSetupDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<PSUILocalConvertModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (retain) NSString *iccid; // ivar: _iccid
@property BOOL isViewControllerPopNeeded; // ivar: _isViewControllerPopNeeded
@property (weak) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(id)getLogger;
-(id)initWithDelegate:(id)arg0 isViewControllerPopNeeded:(BOOL)arg1 odcFlow:(id)arg2 delegate:(id)arg3 iccid:(id)arg4 ;
-(void)dealloc;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;


@end


#endif