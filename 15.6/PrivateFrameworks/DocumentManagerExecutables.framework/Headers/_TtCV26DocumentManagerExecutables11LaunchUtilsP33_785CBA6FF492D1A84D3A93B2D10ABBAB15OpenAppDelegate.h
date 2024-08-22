// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV26DOCUMENTMANAGEREXECUTABLES11LAUNCHUTILSP33_785CBA6FF492D1A84D3A93B2D10ABBAB15OPENAPPDELEGATE_H
#define _TTCV26DOCUMENTMANAGEREXECUTABLES11LAUNCHUTILSP33_785CBA6FF492D1A84D3A93B2D10ABBAB15OPENAPPDELEGATE_H

@protocol LSOpenResourceOperationDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV26DocumentManagerExecutables11LaunchUtilsP33_785CBA6FF492D1A84D3A93B2D10ABBAB15OpenAppDelegate : NSObject <LSOpenResourceOperationDelegate>

 {
    ? completionBlock;
}




-(id)init;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperation:(id)arg0 didFinishCopyingResource:(id)arg1 ;
-(void)openResourceOperationDidComplete:(id)arg0 ;


@end


#endif