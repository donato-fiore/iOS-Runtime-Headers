// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHDATASTREAMINPUT_H
#define SHDATASTREAMINPUT_H

@class NSString;
@protocol SHDataStream;

#import <Foundation/Foundation.h>


@interface SHDataStreamInput : NSObject <SHDataStream>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHDataStream> *next; // ivar: _next
@property (readonly) Class superclass;


-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)loadDataFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)processData:(id)arg0 error:(*id)arg1 ;
-(BOOL)readFromURL:(id)arg0 toStream:(id)arg1 error:(*id)arg2 ;


@end


#endif