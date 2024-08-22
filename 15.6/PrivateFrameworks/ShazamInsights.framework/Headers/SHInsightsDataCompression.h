// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHINSIGHTSDATACOMPRESSION_H
#define SHINSIGHTSDATACOMPRESSION_H

@class NSString;
@protocol SHInsightsDataStream;

#import <Foundation/Foundation.h>


@interface SHInsightsDataCompression : NSObject <SHInsightsDataStream>



@property (nonatomic) int algorithm; // ivar: _algorithm
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHInsightsDataStream> *next; // ivar: _next
@property (nonatomic) int operation; // ivar: _operation
@property (readonly, nonatomic) ? stream; // ivar: _stream
@property (readonly) Class superclass;


+(int)supportedCompressionTypeFromFilePathExtension:(id)arg0 ;
+(int)supportedCompressionTypeFromFileURL:(id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)performOperation:(int)arg0 withData:(id)arg1 algorithm:(int)arg2 flags:(int)arg3 error:(*id)arg4 ;
-(BOOL)processData:(id)arg0 error:(*id)arg1 ;
-(BOOL)setup;
-(id)initForCompressionWithAlgorithm:(int)arg0 ;
-(id)initForDecompressionWithAlgorithm:(int)arg0 ;
-(id)initWithOperation:(int)arg0 algorithm:(int)arg1 ;
-(void)dealloc;


@end


#endif