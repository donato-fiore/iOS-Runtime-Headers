// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENQUERYFILTER_H
#define ENQUERYFILTER_H


#import <Foundation/Foundation.h>


@interface ENQueryFilter : NSObject {
    char * _filterBuffer;
    *NSUInteger _hashSalts;
}


@property (readonly, nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (readonly, nonatomic) NSUInteger hashCount; // ivar: _hashCount


-(BOOL)shouldIgnoreRPI:(*void)arg0 ;
-(id)init;
-(id)initWithBufferSize:(NSUInteger)arg0 hashCount:(NSUInteger)arg1 ;
-(void)addPossibleRPI:(*void)arg0 ;
-(void)dealloc;


@end


#endif