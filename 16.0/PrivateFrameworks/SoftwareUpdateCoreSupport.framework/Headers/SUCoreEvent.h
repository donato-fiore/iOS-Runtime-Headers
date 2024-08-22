// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREEVENT_H
#define SUCOREEVENT_H

@class NSMutableDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface SUCoreEvent : NSObject

@property (retain, nonatomic) NSMutableDictionary *allFields; // ivar: _allFields
@property (nonatomic) BOOL changedSinceReported; // ivar: _changedSinceReported
@property (retain, nonatomic) NSString *reportedUUID; // ivar: _reportedUUID
@property (retain, nonatomic) NSURL *serverURL; // ivar: _serverURL


-(BOOL)isEqualErrorEvent:(id)arg0 ;
-(BOOL)isSuccess;
-(id)getAugmentedEvent;
-(id)initWithEventDictionary:(id)arg0 extendingWith:(id)arg1 reportingToServer:(id)arg2 ;
-(void)incrementErrorCount;


@end


#endif