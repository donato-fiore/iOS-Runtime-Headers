// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFCLIENTINFOMUTATION_H
#define _AFCLIENTINFOMUTATION_H

@class NSString;
@protocol AFClientInfoMutating;

#import <Foundation/Foundation.h>

#import "AFClientInfo.h"

@interface _AFClientInfoMutation : NSObject <AFClientInfoMutating>

 {
    AFClientInfo *_baseModel;
    int _processIdentifier;
    NSString *_processName;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setProcessIdentifier:(int)arg0 ;
-(void)setProcessName:(id)arg0 ;


@end


#endif