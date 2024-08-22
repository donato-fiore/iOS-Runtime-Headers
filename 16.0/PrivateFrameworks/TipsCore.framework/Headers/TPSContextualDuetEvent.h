// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCONTEXTUALDUETEVENT_H
#define TPSCONTEXTUALDUETEVENT_H

@class NSArray, NSString;


#import "TPSContextualEvent.h"
#import "TPSContextualDuetEventMeta.h"
#import "TPSContextualDuetEventSource.h"
#import "TPSContextualDuetEventValue.h"

@interface TPSContextualDuetEvent : TPSContextualEvent

@property (copy, nonatomic) NSArray *groupByKeyPaths; // ivar: _groupByKeyPaths
@property (copy, nonatomic) TPSContextualDuetEventMeta *meta; // ivar: _meta
@property (copy, nonatomic) TPSContextualDuetEventSource *source; // ivar: _source
@property (nonatomic) NSInteger storeType; // ivar: _storeType
@property (copy, nonatomic) NSString *stream; // ivar: _stream
@property (copy, nonatomic) TPSContextualDuetEventValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(NSInteger)_defaultStoreTypeForStream:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)newStateFromStateDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif