// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMFASTENUMERATOR_H
#define RLMFASTENUMERATOR_H


#import <Foundation/Foundation.h>

#import "RLMRealm.h"

@interface RLMFastEnumerator : NSObject {
    id _strongBuffer;
    RLMRealm *_realm;
    *void _info;
    *void _results;
    Results _snapshot;
    id *_collection;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)initWithList:(*void)arg0 collection:(id)arg1 realm:(id)arg2 classInfo:(*void)arg3 ;
-(id)initWithResults:(*void)arg0 collection:(id)arg1 realm:(id)arg2 classInfo:(*void)arg3 ;
-(void)dealloc;
-(void)detach;


@end


#endif