// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPRUNER_H
#define BMPRUNER_H

@class BMStoreConfig;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMPruner : NSObject

@property (readonly, nonatomic) BMStoreConfig *storeConfig; // ivar: _storeConfig
@property (readonly, nonatomic) BMStoreStream *storeStream; // ivar: _storeStream


+(id)new;
-(id)init;
-(id)initWithStoreStream:(id)arg0 ;
-(id)initWithStoreStream:(id)arg0 config:(id)arg1 ;
-(void)deleteEventsPassingTest:(id)arg0 ;
-(void)pruneStream;


@end


#endif