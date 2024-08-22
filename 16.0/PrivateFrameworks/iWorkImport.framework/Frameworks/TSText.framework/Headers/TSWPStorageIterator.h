// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSTORAGEITERATOR_H
#define TSWPSTORAGEITERATOR_H

@class NSMutableArray, NSCharacterSet;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPStorageIterator : NSObject

@property (nonatomic) NSUInteger charIndex; // ivar: _charIndex
@property (nonatomic) BOOL lastEventWasMarker; // ivar: _lastEventWasMarker
@property (retain, nonatomic) NSMutableArray *locationProviders; // ivar: _locationProviders
@property (retain, nonatomic) NSCharacterSet *markers; // ivar: _markers
@property (retain, nonatomic) NSMutableArray *pendingEvents; // ivar: _pendingEvents
@property (retain, nonatomic) NSMutableArray *rangeProviders; // ivar: _rangeProviders
@property (nonatomic) BOOL sendEventsForNilObjects; // ivar: _sendEventsForNilObjects
@property (nonatomic) NSUInteger startCharIndex; // ivar: _startCharIndex
@property (retain, nonatomic) TSWPStorage *storage; // ivar: _storage


-(id)description;
-(id)initWithStorage:(id)arg0 ;
-(id)nextEvent;
-(void)addAttributeRangeProvider:(NSUInteger)arg0 ;
-(void)addLocationProvider:(id)arg0 ;
-(void)addRangeProvider:(id)arg0 ;
-(void)p_emitEventForMarkerCharacter:(unsigned short)arg0 atIndex:(NSUInteger)arg1 ;
-(void)p_emitEventWithType:(int)arg0 provider:(id)arg1 range:(struct _NSRange )arg2 object:(id)arg3 ;
-(void)p_emitPendingCharactersAndEvent:(id)arg0 ;
-(void)p_forceRangeEndForProvider:(id)arg0 providerIndex:(NSUInteger)arg1 atCharIndex:(NSUInteger)arg2 ;


@end


#endif