// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLM3U8PARSER_H
#define BLM3U8PARSER_H

@class NSMutableData, NSData, NSString, NSError;
@protocol NSURLSessionDataDelegate, BLM3U8ParserDelegate;

#import <Foundation/Foundation.h>


@interface BLM3U8Parser : NSObject <NSURLSessionDataDelegate>



@property (retain, nonatomic) NSMutableData *bytes; // ivar: _bytes
@property (nonatomic) BOOL collectForRewrite; // ivar: _collectForRewrite
@property (retain, nonatomic) NSMutableData *collectedData; // ivar: _collectedData
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLM3U8ParserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)parseWithError:(*id)arg0 ;
-(BOOL)rewriteWithURL:(id)arg0 ;
-(NSUInteger)consumeBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)parseAttributeList:(id)arg0 ;
-(void)processLine;
-(void)saveLine:(id)arg0 ;


@end


#endif