// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCHANGECOLLECTOR_H
#define TSKCHANGECOLLECTOR_H


#import <Foundation/Foundation.h>


@interface TSKChangeCollector : NSObject



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)threadCollector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)endCollectingChanges;
-(id)peekCollectedChanges;
-(void)beginCollectingChanges;
-(void)endCollectingChangesAndDiscardChanges;
-(void)registerChange:(unsigned int)arg0 details:(id)arg1 forChangeSource:(id)arg2 ;


@end


#endif