// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JXHTTPMULTIPARTPART_H
#define JXHTTPMULTIPARTPART_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface JXHTTPMultipartPart : NSObject

@property (retain, nonatomic) NSData *contentData; // ivar: _contentData
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int multipartType; // ivar: _multipartType
@property (retain, nonatomic) NSData *postData; // ivar: _postData
@property (retain, nonatomic) NSData *preData; // ivar: _preData


+(id)withMultipartType:(int)arg0 key:(id)arg1 data:(id)arg2 contentType:(id)arg3 fileName:(id)arg4 boundary:(id)arg5 ;
-(NSInteger)contentLength;
-(NSInteger)dataLength;
-(NSUInteger)loadMutableData:(id)arg0 withDataInRange:(struct _NSRange )arg1 ;
-(id)filePath;


@end


#endif