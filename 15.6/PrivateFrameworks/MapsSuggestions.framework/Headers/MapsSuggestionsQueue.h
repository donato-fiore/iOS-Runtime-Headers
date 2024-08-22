// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSQUEUE_H
#define MAPSSUGGESTIONSQUEUE_H

@class NSString;
@protocol MapsSuggestionsObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject>

 {
    unique_ptr<MSg::Queue, std::default_delete<MSg::Queue>> _cppQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *innerQueue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(id)serialQueueWithName:(id)arg0 ;
-(BOOL)syncBOOLReturningBlock:(id)arg0 ;
-(id)initSerialQueueWithName:(id)arg0 ;
-(id)syncReturningBlock:(id)arg0 ;
-(void)asyncBlock:(id)arg0 ;
-(void)syncBlock:(id)arg0 ;


@end


#endif