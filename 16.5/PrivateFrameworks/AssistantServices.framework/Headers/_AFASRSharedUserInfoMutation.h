// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFASRSHAREDUSERINFOMUTATION_H
#define _AFASRSHAREDUSERINFOMUTATION_H

@class NSString;
@protocol AFASRSharedUserInfoMutating;

#import <Foundation/Foundation.h>

#import "AFASRSharedUserInfo.h"

@interface _AFASRSharedUserInfoMutation : NSObject <AFASRSharedUserInfoMutating>

 {
    AFASRSharedUserInfo *_base;
    NSString *_sharedUserId;
    NSString *_loggableSharedUserId;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getLoggableSharedUserId;
-(id)getSharedUserId;
-(id)initWithBase:(id)arg0 ;
-(void)setLoggableSharedUserId:(id)arg0 ;
-(void)setSharedUserId:(id)arg0 ;


@end


#endif