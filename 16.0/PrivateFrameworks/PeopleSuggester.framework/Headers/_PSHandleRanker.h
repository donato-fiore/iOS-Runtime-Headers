// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSHANDLERANKER_H
#define _PSHANDLERANKER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface _PSHandleRanker : NSObject {
    NSXPCConnection *_connection;
}




-(id)init;
-(id)rankedHandlesFromCandidateHandles:(id)arg0 ;
-(void)dealloc;


@end


#endif