// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPAUGMENTEDGAZETTEER_H
#define PPAUGMENTEDGAZETTEER_H

@class _PASSqliteDatabase, _PASLock;

#import <Foundation/Foundation.h>

#import "PPContextPredictor.h"

@interface PPAugmentedGazetteer : NSObject {
    _PASSqliteDatabase *_db;
    _PASLock *_lock;
    PPContextPredictor *_contextPredictor;
}




-(id)init;
-(id)initWithDatabaseAsset:(id)arg0 gazetteerPath:(id)arg1 contextPredictor:(id)arg2 ;
-(void)dealloc;
// -(void)iterExtractionsForText:(id)arg0 addEntity:(id)arg1 addTopic:(unk)arg2 addLocation:(id)arg3  ;


@end


#endif