// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMIDDLEWAREOPERATIONMAP_H
#define MPMIDDLEWAREOPERATIONMAP_H

@class NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MPMiddlewareOperationMap : NSObject {
    NSMapTable *_middlewareOperationMap;
    NSMutableArray *_middleware;
    NSMutableArray *_operations;
}




+(id)mapForRequest:(id)arg0 ;
-(id)_init;
-(id)allMiddleware;
-(id)allOperations;
-(id)operationsForMiddleware:(id)arg0 ;


@end


#endif