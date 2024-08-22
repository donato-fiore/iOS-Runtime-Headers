// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKIT_PKSUBSYSTEM_H
#define UIKIT_PKSUBSYSTEM_H

@class NSDictionary;
@protocol PKModularService;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface UIKit_PKSubsystem : NSObject <PKModularService>

 {
    BOOL _initialized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *infoDictionary; // ivar: _infoDictionary
@property (nonatomic, getter=isPlugInKitProcess) BOOL plugInKitProcess; // ivar: _plugInKitProcess
@property (readonly) Class superclass;


+(id)initForPlugInKit;
+(id)initForPlugInKitWithOptions:(id)arg0 ;
+(id)sharedInstance;
-(void)beginUsing:(id)arg0 withBundle:(id)arg1 ;
-(void)dealloc;
-(void)endUsing:(id)arg0 ;


@end


#endif