// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTABLECOLUMN_H
#define CTABLECOLUMN_H


#import <Foundation/Foundation.h>

#import "fullPropSpec.h"

@interface cTableColumn : NSObject

@property unsigned char aggregateType; // ivar: _aggregateType
@property BOOL aggregateUsed; // ivar: _aggregateUsed
@property unsigned short lengthOffset; // ivar: _lengthOffset
@property BOOL lengthUsed; // ivar: _lengthUsed
@property (retain) fullPropSpec *propSpec; // ivar: _propSpec
@property unsigned short statusOffset; // ivar: _statusOffset
@property BOOL statusUsed; // ivar: _statusUsed
@property unsigned int vType; // ivar: _vType
@property unsigned short valueOffset; // ivar: _valueOffset
@property unsigned short valueSize; // ivar: _valueSize
@property BOOL valueUsed; // ivar: _valueUsed


-(id)initWithPropertyNumber:(int)arg0 WspCtx:(id)arg1 ;


@end


#endif