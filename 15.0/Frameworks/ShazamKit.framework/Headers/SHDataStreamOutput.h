// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHDATASTREAMOUTPUT_H
#define SHDATASTREAMOUTPUT_H

@class NSString, NSOutputStream;
@protocol SHDataStream;

#import <Foundation/Foundation.h>


@interface SHDataStreamOutput : NSObject <SHDataStream>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHDataStream> *next; // ivar: _next
@property (retain, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly) Class superclass;


-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)processData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestination:(id)arg0 ;
-(void)dealloc;


@end


#endif