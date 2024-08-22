// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IXSIMPLEINSTALLERDELEGATE_H
#define _IXSIMPLEINSTALLERDELEGATE_H

@class NSString, IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator>, NSURL;
@protocol IXAppInstallCoordinatorObserver;

#import <Foundation/Foundation.h>


@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *moveResultToURL; // ivar: _moveResultToURL
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly) Class superclass;


-(void)coordinator:(id)arg0 canceledWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)coordinator:(id)arg0 didUpdateProgress:(CGFloat)arg1 forPhase:(NSUInteger)arg2 overallProgress:(CGFloat)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg0 forApplicationRecord:(id)arg1 ;


@end


#endif