// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSTHERMALLOGLINE_H
#define DSTHERMALLOGLINE_H

@class NSString;


#import "DSLogLine.h"

@interface DSThermalLogLine : DSLogLine

@property (retain, nonatomic) NSString *eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL isTrapEntry;
@property (readonly, nonatomic) BOOL isTrapEvent;
@property (nonatomic) float maxTemp; // ivar: _maxTemp


-(id)initWithLogLine:(id)arg0 ;


@end


#endif