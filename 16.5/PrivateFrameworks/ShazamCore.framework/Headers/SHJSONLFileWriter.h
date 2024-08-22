// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHJSONLFILEWRITER_H
#define SHJSONLFILEWRITER_H

@class NSURL;
@protocol SHDataStream;

#import <Foundation/Foundation.h>


@interface SHJSONLFileWriter : NSObject

@property (readonly, nonatomic) NSURL *destination; // ivar: _destination
@property (readonly, nonatomic) NSObject<SHDataStream> *outputStream; // ivar: _outputStream


+(NSInteger)dataCompressionFromAlgorithm:(int)arg0 ;
+(id)dataForJSONObject:(id)arg0 error:(*id)arg1 ;
+(id)dataForJSONObjects:(id)arg0 compression:(int)arg1 error:(*id)arg2 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)writeObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestination:(id)arg0 compression:(int)arg1 ;
-(id)streamForWritingToURL:(id)arg0 withCompression:(int)arg1 ;
-(void)linkDataStream:(id)arg0 ;


@end


#endif