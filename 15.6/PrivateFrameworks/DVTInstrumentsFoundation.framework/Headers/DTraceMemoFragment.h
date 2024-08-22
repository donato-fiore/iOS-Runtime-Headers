// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTRACEMEMOFRAGMENT_H
#define DTRACEMEMOFRAGMENT_H


#import <Foundation/Foundation.h>


@interface DTraceMemoFragment : NSObject

@property (readonly, nonatomic) unsigned int code; // ivar: _code
@property (readonly, nonatomic) NSInteger filePositionEnd; // ivar: _filePositionEnd
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(id)initWithTimestamp:(NSUInteger)arg0 filePositionEnd:(NSInteger)arg1 code:(unsigned int)arg2 ;


@end


#endif