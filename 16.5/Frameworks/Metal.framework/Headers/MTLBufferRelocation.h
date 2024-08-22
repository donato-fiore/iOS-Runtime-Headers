// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLBUFFERRELOCATION_H
#define MTLBUFFERRELOCATION_H

@class NSString;
@protocol MTLRelocation, MTLBuffer;

#import <Foundation/Foundation.h>


@interface MTLBufferRelocation : NSObject <MTLRelocation>



@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName


-(id)initWithSymbolName:(id)arg0 buffer:(id)arg1 offset:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif