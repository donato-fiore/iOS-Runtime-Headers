// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXSERVICE_SUBSYSTEM_H
#define EXSERVICE_SUBSYSTEM_H

@class NSString;
@protocol PKModularService;

#import <Foundation/Foundation.h>


@interface EXService_Subsystem : NSObject <PKModularService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)initForPlugInKit;
+(id)sharedInstance;
-(void)beginUsing:(id)arg0 withBundle:(id)arg1 ;


@end


#endif