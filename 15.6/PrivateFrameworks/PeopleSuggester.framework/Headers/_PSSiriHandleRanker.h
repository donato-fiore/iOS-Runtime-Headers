// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSSIRIHANDLERANKER_H
#define _PSSIRIHANDLERANKER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface _PSSiriHandleRanker : NSObject {
    NSXPCConnection *_connection;
}




-(id)init;
-(id)rankedHandles:(id)arg0 context:(id)arg1 ;
-(void)dealloc;


@end


#endif