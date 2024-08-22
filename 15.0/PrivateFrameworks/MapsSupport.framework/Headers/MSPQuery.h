// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPQUERY_H
#define MSPQUERY_H

@class NSArray, NSString;
@protocol MSPQuerySourceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MSPQueryState.h"
#import "MSPQuerySource.h"

@interface MSPQuery : NSObject <MSPQuerySourceObserver>

 {
    _MSPQueryState *_lastState;
    MSPQuerySource *_source;
}


@property (readonly, copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *changeHandlerQueue; // ivar: _changeHandlerQueue
@property (readonly) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, getter=_lastState, setter=_setLastState:) _MSPQueryState *lastState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *unmappedContents; // ivar: _unmappedContents
@property (readonly, getter=_visibleState) _MSPQueryState *visibleState;


-(id)_initWithSource:(id)arg0 ;
-(id)originalIdentifierForObject:(id)arg0 ;
-(id)originalIdentifierForObjectAtIndex:(NSUInteger)arg0 ;
-(void)_didChangeSourceWithNewState:(id)arg0 context:(id)arg1 inContainer:(id)arg2 ;


@end


#endif