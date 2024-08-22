// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CROWSETPROPERTIES_H
#define CROWSETPROPERTIES_H


#import <Foundation/Foundation.h>


@interface cRowsetProperties : NSObject

@property unsigned int booleanOptions; // ivar: _booleanOptions
@property unsigned int cmdTimeout; // ivar: _cmdTimeout
@property unsigned int maxOpenRows; // ivar: _maxOpenRows
@property unsigned int maxResult; // ivar: _maxResult
@property unsigned int memoryUsage; // ivar: _memoryUsage


-(id)init;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif