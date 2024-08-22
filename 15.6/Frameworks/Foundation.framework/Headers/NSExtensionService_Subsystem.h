// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSEXTENSIONSERVICE_SUBSYSTEM_H
#define NSEXTENSIONSERVICE_SUBSYSTEM_H

@protocol PKModularService;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSExtensionService_Subsystem : NSObject <PKModularService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)initForPlugInKit;
+(id)sharedInstance;
-(void)beginUsing:(id)arg0 withBundle:(id)arg1 ;


@end


#endif