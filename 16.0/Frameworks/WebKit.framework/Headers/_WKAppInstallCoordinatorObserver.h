// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKAPPINSTALLCOORDINATOROBSERVER_H
#define _WKAPPINSTALLCOORDINATOROBSERVER_H

@class NSString;
@protocol IXAppInstallCoordinatorObserver;

#import <Foundation/Foundation.h>


@interface _WKAppInstallCoordinatorObserver : NSObject <IXAppInstallCoordinatorObserver>

 {
    WeakPtr<WebPushD::ICAppBundle, WTF::EmptyCounter> _bundle;
}


@property ? bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithICAppBundle:(*void)arg0 ;
-(void)coordinator:(id)arg0 canceledWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg0 forApplicationRecord:(id)arg1 ;


@end


#endif