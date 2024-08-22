// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFCLIENTINFOMUTATION_H
#define _AFCLIENTINFOMUTATION_H

@class NSString;
@protocol AFClientInfoMutating;

#import <Foundation/Foundation.h>

#import "AFClientInfo.h"

@interface _AFClientInfoMutation : NSObject <AFClientInfoMutating>

 {
    AFClientInfo *_base;
    int _processIdentifier;
    NSString *_processName;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getProcessName;
-(id)initWithBase:(id)arg0 ;
-(int)getProcessIdentifier;
-(void)setProcessIdentifier:(int)arg0 ;
-(void)setProcessName:(id)arg0 ;


@end


#endif