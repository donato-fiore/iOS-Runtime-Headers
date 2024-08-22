// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSYSTEMPAPERSEARCHINDEXER_H
#define ICSYSTEMPAPERSEARCHINDEXER_H


#import <Foundation/Foundation.h>


@interface ICSystemPaperSearchIndexer : NSObject {
    ? titleQueries;
    ? $__lazy_storage_$_workerQueueQoS;
    ? $__lazy_storage_$_workerQueue;
}




+(id)shared;
-(id)init;
-(void)updateIndexForAttachment:(id)arg0 ;


@end


#endif