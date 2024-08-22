// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPEXTENSION_SUBSYSTEM_H
#define FPEXTENSION_SUBSYSTEM_H

@class NSString, NSDictionary;
@protocol PKModularService;

#import <Foundation/Foundation.h>


@interface FPExtension_subsystem : NSObject <PKModularService>

 {
    BOOL _initialized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *infoDictionary; // ivar: _infoDictionary
@property (readonly) Class superclass;


+(id)initForPlugInKit;
+(id)sharedInstance;
-(void)beginUsing:(id)arg0 withBundle:(id)arg1 ;
-(void)endUsing:(id)arg0 ;


@end


#endif