// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JXHTTPMULTIPARTBODY_H
#define JXHTTPMULTIPARTBODY_H

@class NSMutableData, NSString, NSData, NSInputStream, NSOutputStream, NSMutableArray;
@protocol NSStreamDelegate, JXHTTPRequestBody;

#import <Foundation/Foundation.h>


@interface JXHTTPMultipartBody : NSObject <NSStreamDelegate, JXHTTPRequestBody>



@property (retain, nonatomic) NSMutableData *bodyDataBuffer; // ivar: _bodyDataBuffer
@property (retain, nonatomic) NSString *boundaryString; // ivar: _boundaryString
@property (nonatomic) NSInteger bytesWritten; // ivar: _bytesWritten
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *finalBoundaryData; // ivar: _finalBoundaryData
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger httpContentLength; // ivar: _httpContentLength
@property (retain, nonatomic) NSString *httpContentType; // ivar: _httpContentType
@property (retain, nonatomic) NSInputStream *httpInputStream; // ivar: _httpInputStream
@property (retain, nonatomic) NSOutputStream *httpOutputStream; // ivar: _httpOutputStream
@property (retain, nonatomic) NSMutableArray *partsArray; // ivar: _partsArray
@property (nonatomic) NSUInteger streamBufferLength; // ivar: _streamBufferLength
@property (readonly) Class superclass;


+(id)withDictionary:(id)arg0 ;
-(NSUInteger)loadMutableData:(id)arg0 withDataInRange:(struct _NSRange )arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)addData:(id)arg0 forKey:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 ;
-(void)addFile:(id)arg0 forKey:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 ;
-(void)addPartWithType:(int)arg0 forKey:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 data:(id)arg4 ;
-(void)addString:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)httpOperationDidFail:(id)arg0 ;
-(void)httpOperationDidFinishLoading:(id)arg0 ;
-(void)httpOperationWillNeedNewBodyStream:(id)arg0 ;
-(void)httpOperationWillStart:(id)arg0 ;
-(void)recreateStreamsForOperation:(id)arg0 ;
-(void)scheduleOutputStreamOnThread:(id)arg0 ;
-(void)setData:(id)arg0 forKey:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 ;
-(void)setFile:(id)arg0 forKey:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 ;
-(void)setPartWithType:(int)arg0 forKey:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 data:(id)arg4 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif