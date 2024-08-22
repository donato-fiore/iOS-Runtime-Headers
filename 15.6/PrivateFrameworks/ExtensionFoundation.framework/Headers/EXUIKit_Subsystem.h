// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXUIKIT_SUBSYSTEM_H
#define EXUIKIT_SUBSYSTEM_H

@class NSString, NSDictionary;
@protocol PKModularService;

#import <Foundation/Foundation.h>


@interface EXUIKit_Subsystem : NSObject <PKModularService>

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
-(void)endUsing:(id)arg0 ;


@end


#endif