// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKPTRIGGERKDEBUG_H
#define DTKPTRIGGERKDEBUG_H



#import "DTKPTrigger.h"
#import "DTKPKDebugCodeSet.h"

@interface DTKPTriggerKDebug : DTKPTrigger

@property (readonly, retain, nonatomic) DTKPKDebugCodeSet *codeSet; // ivar: _codeSet
@property (nonatomic) int filterMode; // ivar: _filterMode


-(NSUInteger)triggerKind;
-(id)initWithCounterAllocatorProvider:(id)arg0 ;
-(int)start:(*id)arg0 ;
-(int)stop:(*id)arg0 ;
-(void)addCodeSet:(id)arg0 ;
-(void)clearCodeSet;
-(void)enableClass:(unsigned char)arg0 ;
-(void)enableClass:(unsigned char)arg0 subclass:(unsigned char)arg1 ;
-(void)enableClass:(unsigned char)arg0 subclass:(unsigned char)arg1 code:(unsigned int)arg2 ;
-(void)enableDebugID:(unsigned int)arg0 ;


@end


#endif