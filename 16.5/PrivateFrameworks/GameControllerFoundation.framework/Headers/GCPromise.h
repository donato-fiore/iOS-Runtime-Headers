// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCPROMISE_H
#define GCPROMISE_H


#import <Foundation/Foundation.h>

#import "GCFuture.h"

@interface GCPromise : NSObject {
    GCFuture *_future;
}


@property (readonly, getter=isCancelled) BOOL cancelled;


-(id)debugDescription;
-(id)description;
-(id)future;
-(id)init;
-(id)redactedDescription;
-(void)cancel;
-(void)dealloc;
-(void)failWithError:(id)arg0 ;
-(void)succeedWithResult:(id)arg0 ;


@end


#endif