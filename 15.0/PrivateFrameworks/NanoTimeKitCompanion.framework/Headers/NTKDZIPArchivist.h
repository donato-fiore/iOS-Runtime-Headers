// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDZIPARCHIVIST_H
#define NTKDZIPARCHIVIST_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKDZIPArchivist : NSObject {
    NSObject<OS_dispatch_queue> *_unzipQueue;
}




-(id)init;
-(id)zippedDataForPath:(id)arg0 ;
-(void)unzipStream:(id)arg0 toPath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif