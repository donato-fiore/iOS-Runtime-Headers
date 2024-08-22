// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAVOCADODEBUGGINGCONTROLLER_H
#define SBAVOCADODEBUGGINGCONTROLLER_H

@class NSHashTable, NSString;
@protocol SBExtensionHandling;

#import <Foundation/Foundation.h>


@interface SBAvocadoDebuggingController : NSObject <SBExtensionHandling>

 {
    NSHashTable *_inFlightAnimationTransactions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_descriptorForWidgetFromExtension:(id)arg0 forRequestedKind:(id)arg1 widgetFamily:(*NSInteger)arg2 toolService:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(void)launchExtensionWithBundleID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)reallyLaunchToWidgetOnHomeScreenForDescriptor:(id)arg0 widgetFamily:(NSInteger)arg1 ;


@end


#endif