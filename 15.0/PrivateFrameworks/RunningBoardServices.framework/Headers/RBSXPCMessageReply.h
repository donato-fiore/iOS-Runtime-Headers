// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSXPCMESSAGEREPLY_H
#define RBSXPCMESSAGEREPLY_H

@protocol RBSXPCEncoding><RBSXPCDecoding;

#import <Foundation/Foundation.h>

#import "RBSXPCMessageContext.h"

@interface RBSXPCMessageReply : NSObject {
    RBSXPCMessageContext *_context;
    BOOL _sent;
}


@property (readonly, nonatomic) NSObject<RBSXPCEncoding><RBSXPCDecoding> *payload; // ivar: _payload


-(void)prepareForHandoff;
-(void)send;


@end


#endif