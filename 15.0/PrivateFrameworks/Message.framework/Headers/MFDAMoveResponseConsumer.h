// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDAMOVERESPONSECONSUMER_H
#define MFDAMOVERESPONSECONSUMER_H

@class NSSet, NSMutableDictionary, NSMutableSet;
@protocol DAMessageMoveRequestConsumer;


#import "MFDAMailAccountConsumer.h"
#import "MFError.h"

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer>

 {
    NSSet *_sourceRemoteIDs;
    NSMutableDictionary *_destinationRemoteIDsBySourceRemoteIDs;
    NSMutableSet *_failures;
}


@property (retain, nonatomic) MFError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode


-(id)initWithSourceRemoteIDs:(id)arg0 destinationRemoteIDsBySourceRemoteIDs:(id)arg1 failures:(id)arg2 ;
-(void)resultsForMessageMove:(id)arg0 ;
-(void)taskFailed:(id)arg0 statusCode:(NSInteger)arg1 error:(id)arg2 ;


@end


#endif