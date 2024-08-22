// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFENDPOINTINFOMUTATION_H
#define _AFENDPOINTINFOMUTATION_H

@class NSString;
@protocol AFEndpointInfoMutating;

#import <Foundation/Foundation.h>

#import "AFEndpointInfo.h"

@interface _AFEndpointInfoMutation : NSObject <AFEndpointInfoMutating>

 {
    AFEndpointInfo *_base;
    NSString *_identifier;
    NSString *_mediaRouteIdentifier;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getIdentifier;
-(id)getMediaRouteIdentifier;
-(id)initWithBase:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setMediaRouteIdentifier:(id)arg0 ;


@end


#endif