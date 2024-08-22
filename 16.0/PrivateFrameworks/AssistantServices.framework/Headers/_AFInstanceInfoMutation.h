// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFINSTANCEINFOMUTATION_H
#define _AFINSTANCEINFOMUTATION_H

@class NSUUID, NSString;
@protocol AFInstanceInfoMutating;

#import <Foundation/Foundation.h>

#import "AFInstanceInfo.h"

@interface _AFInstanceInfoMutation : NSObject <AFInstanceInfoMutating>

 {
    AFInstanceInfo *_base;
    NSUUID *_instanceUUID;
    NSInteger _applicationType;
    NSUUID *_applicationUUID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getApplicationType;
-(id)getApplicationUUID;
-(id)getInstanceUUID;
-(id)initWithBase:(id)arg0 ;
-(void)setApplicationType:(NSInteger)arg0 ;
-(void)setApplicationUUID:(id)arg0 ;
-(void)setInstanceUUID:(id)arg0 ;


@end


#endif