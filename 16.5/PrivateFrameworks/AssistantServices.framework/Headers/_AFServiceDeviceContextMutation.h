// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFSERVICEDEVICECONTEXTMUTATION_H
#define _AFSERVICEDEVICECONTEXTMUTATION_H

@class NSUUID, NSString, NSDictionary;
@protocol AFServiceDeviceContextMutating;

#import <Foundation/Foundation.h>

#import "AFServiceDeviceContext.h"

@interface _AFServiceDeviceContextMutation : NSObject <AFServiceDeviceContextMutating>

 {
    AFServiceDeviceContext *_base;
    NSUUID *_identifier;
    NSString *_assistantIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_sharedUserID;
    NSString *_roomName;
    NSInteger _proximity;
    NSDictionary *_serializedContextByKey;
    NSDictionary *_metricsContext;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getProximity;
-(id)getAssistantIdentifier;
-(id)getIdentifier;
-(id)getMediaRouteIdentifier;
-(id)getMediaSystemIdentifier;
-(id)getMetricsContext;
-(id)getRoomName;
-(id)getSerializedContextByKey;
-(id)getSharedUserID;
-(id)initWithBase:(id)arg0 ;
-(void)setAssistantIdentifier:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setMediaRouteIdentifier:(id)arg0 ;
-(void)setMediaSystemIdentifier:(id)arg0 ;
-(void)setMetricsContext:(id)arg0 ;
-(void)setProximity:(NSInteger)arg0 ;
-(void)setRoomName:(id)arg0 ;
-(void)setSerializedContextByKey:(id)arg0 ;
-(void)setSharedUserID:(id)arg0 ;


@end


#endif