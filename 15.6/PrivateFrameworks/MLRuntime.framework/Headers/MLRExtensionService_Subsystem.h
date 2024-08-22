// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLREXTENSIONSERVICE_SUBSYSTEM_H
#define MLREXTENSIONSERVICE_SUBSYSTEM_H

@class NSString;
@protocol PKModularService;

#import <Foundation/Foundation.h>


@interface MLRExtensionService_Subsystem : NSObject <PKModularService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)initForPlugInKit;
+(id)sharedInstance;
-(void)beginUsing:(id)arg0 withBundle:(id)arg1 ;


@end


#endif