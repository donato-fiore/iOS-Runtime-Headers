// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKEVENT_H
#define BKEVENT_H


#import <Foundation/Foundation.h>


@interface BKEvent : NSObject

@property (readonly) unsigned char cls; // ivar: _cls
@property (readonly) unsigned int event; // ivar: _event
@property (readonly) BOOL isHigh; // ivar: _isHigh
@property (readonly) BOOL isLow; // ivar: _isLow
@property (readonly) BOOL isMetadata; // ivar: _isMetadata
@property (readonly) BOOL isSmartKeyboard; // ivar: _isSmartKeyboard
@property (readonly) BOOL isStart; // ivar: _isStart
@property (readonly) BOOL isTerminal; // ivar: _isTerminal


-(id)description;
-(id)initWithEncodedEventOrCode:(unsigned int)arg0 ;
-(id)initWithEventOrCode:(NSUInteger)arg0 ;
-(void)encodeEventValue:(*unsigned int)arg0 secondValue:(*unsigned int)arg1 ;
-(void)setProperties;


@end


#endif