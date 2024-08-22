// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDINSTALLAPPS_H
#define ASDINSTALLAPPS_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>


@interface ASDInstallApps : NSObject <ASDServiceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_availableMetadataClasses;
+(id)interface;
+(void)_installApps:(id)arg0 onPairedDevice:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)installApp:(id)arg0 onPairedDevice:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)installApp:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)installApps:(id)arg0 onPairedDevice:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)installApps:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif