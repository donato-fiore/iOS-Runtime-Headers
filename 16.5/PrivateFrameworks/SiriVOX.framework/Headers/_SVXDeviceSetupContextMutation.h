// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXDEVICESETUPCONTEXTMUTATION_H
#define _SVXDEVICESETUPCONTEXTMUTATION_H

@class NSDate, NSString;
@protocol SVXDeviceSetupContextMutating;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupContext.h"
#import "SVXDeviceSetupOptions.h"
#import "SVXDeviceSetupFlowScene.h"

@interface _SVXDeviceSetupContextMutation : NSObject <SVXDeviceSetupContextMutating>

 {
    SVXDeviceSetupContext *_baseModel;
    NSUInteger _timestamp;
    SVXDeviceSetupOptions *_options;
    SVXDeviceSetupFlowScene *_flowScene;
    NSDate *_beginDate;
    NSDate *_endDate;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setBeginDate:(id)arg0 ;
-(void)setEndDate:(id)arg0 ;
-(void)setFlowScene:(id)arg0 ;
-(void)setOptions:(id)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;


@end


#endif