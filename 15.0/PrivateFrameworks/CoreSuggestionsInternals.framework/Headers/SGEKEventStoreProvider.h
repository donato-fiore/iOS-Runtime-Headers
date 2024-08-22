// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGEKEVENTSTOREPROVIDER_H
#define SGEKEVENTSTOREPROVIDER_H


#import <Foundation/Foundation.h>


@interface SGEKEventStoreProvider : NSObject {
    id *_newEKEventStoreGetter;
    id *_callBlockWithEKEventStoreForReading;
}




+(id)defaultEKStoreProvider;
// -(id)initWithNewEKEventStoreGetter:(id)arg0 callBlockWithEKEventStoreForReading:(unk)arg1  ;


@end


#endif