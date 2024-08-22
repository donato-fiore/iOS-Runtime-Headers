// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKEPHEMERALEVENTSEQUENCE_H
#define CKEPHEMERALEVENTSEQUENCE_H

@protocol CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence;

#import <Foundation/Foundation.h>


@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence>

 {
    ? queue;
}




-(BOOL)appendEvent:(id)arg0 ;
-(id)eventsBetween:(id)arg0 and:(id)arg1 ;
-(id)eventsWithIdentifier:(id)arg0 ;
-(id)first;
-(id)init;
-(id)last;
-(void)loadFromKnowledgeStreamNamed:(id)arg0 between:(id)arg1 and:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeEventsToKnowledgeStreamNamed:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif