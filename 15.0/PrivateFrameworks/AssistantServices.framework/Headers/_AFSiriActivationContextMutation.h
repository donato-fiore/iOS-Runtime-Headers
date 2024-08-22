// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFSIRIACTIVATIONCONTEXTMUTATION_H
#define _AFSIRIACTIVATIONCONTEXTMUTATION_H

@class NSString, NSDictionary;
@protocol AFSiriActivationContextMutating;

#import <Foundation/Foundation.h>

#import "AFSiriActivationContext.h"

@interface _AFSiriActivationContextMutation : NSObject <AFSiriActivationContextMutating>

 {
    AFSiriActivationContext *_baseModel;
    NSUInteger _timestamp;
    NSInteger _source;
    NSInteger _event;
    NSUInteger _options;
    NSString *_deviceID;
    NSDictionary *_userInfo;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setDeviceID:(id)arg0 ;
-(void)setEvent:(NSInteger)arg0 ;
-(void)setOptions:(NSUInteger)arg0 ;
-(void)setSource:(NSInteger)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;
-(void)setUserInfo:(id)arg0 ;


@end


#endif