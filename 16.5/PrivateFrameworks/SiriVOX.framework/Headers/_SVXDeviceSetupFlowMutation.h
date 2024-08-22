// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXDEVICESETUPFLOWMUTATION_H
#define _SVXDEVICESETUPFLOWMUTATION_H

@class NSString, NSArray;
@protocol SVXDeviceSetupFlowMutating;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupFlow.h"

@interface _SVXDeviceSetupFlowMutation : NSObject <SVXDeviceSetupFlowMutating>

 {
    SVXDeviceSetupFlow *_baseModel;
    NSString *_identifier;
    NSString *_languageCode;
    NSInteger _gender;
    NSArray *_scenes;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setGender:(NSInteger)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setLanguageCode:(id)arg0 ;
-(void)setScenes:(id)arg0 ;


@end


#endif