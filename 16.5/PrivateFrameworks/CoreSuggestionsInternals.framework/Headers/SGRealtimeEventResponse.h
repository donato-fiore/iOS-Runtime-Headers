// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGREALTIMEEVENTRESPONSE_H
#define SGREALTIMEEVENTRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SGCuratedEventKey.h"
#import "SGEntity.h"

@interface SGRealtimeEventResponse : NSObject

@property (readonly, nonatomic) SGCuratedEventKey *duplicateEventKey; // ivar: _duplicateEventKey
@property (readonly, nonatomic) SGEntity *entity; // ivar: _entity
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly, nonatomic) NSString *templateShortName; // ivar: _templateShortName


-(id)initCancellationOfCuratedEvent:(id)arg0 templateShortName:(id)arg1 entity:(id)arg2 ;
-(id)initDuplicateOfCuratedEvent:(id)arg0 withEntity:(id)arg1 ;
-(id)initExtractionExceptionWithEntity:(id)arg0 ;
-(id)initNewEventWithEntity:(id)arg0 ;
-(id)initUpdatedEventWithEntity:(id)arg0 curatedEventKey:(id)arg1 ;
-(id)initWithEntity:(id)arg0 state:(int)arg1 duplicateEventKey:(id)arg2 templateShortName:(id)arg3 ;


@end


#endif