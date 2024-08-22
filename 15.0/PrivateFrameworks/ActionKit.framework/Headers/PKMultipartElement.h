// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMULTIPARTELEMENT_H
#define PKMULTIPARTELEMENT_H

@class NSInputStream, NSData;

#import <Foundation/Foundation.h>


@interface PKMultipartElement : NSObject

@property (retain, nonatomic) NSInputStream *body; // ivar: _body
@property (nonatomic) NSUInteger bodyLength; // ivar: _bodyLength
@property (nonatomic) NSUInteger delivered; // ivar: _delivered
@property (retain, nonatomic) NSData *headers; // ivar: _headers
@property (nonatomic) NSUInteger headersLength; // ivar: _headersLength
@property (nonatomic) NSUInteger length; // ivar: _length


-(NSUInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(id)initWithHeaders:(id)arg0 path:(id)arg1 boundary:(id)arg2 ;
-(id)initWithHeaders:(id)arg0 string:(id)arg1 boundary:(id)arg2 ;
-(id)initWithName:(id)arg0 boundary:(id)arg1 data:(id)arg2 contentType:(id)arg3 ;
-(id)initWithName:(id)arg0 boundary:(id)arg1 data:(id)arg2 contentType:(id)arg3 filename:(id)arg4 ;
-(id)initWithName:(id)arg0 boundary:(id)arg1 string:(id)arg2 ;
-(id)initWithName:(id)arg0 filename:(id)arg1 boundary:(id)arg2 path:(id)arg3 ;
-(id)initWithName:(id)arg0 filename:(id)arg1 boundary:(id)arg2 path:(id)arg3 contentType:(id)arg4 ;
-(id)initWithName:(id)arg0 filename:(id)arg1 boundary:(id)arg2 stream:(id)arg3 streamLength:(NSUInteger)arg4 ;
-(id)makeHeadersDataFromHeadersDict:(id)arg0 boundary:(id)arg1 ;
-(void)appendNewLine:(id)arg0 ;
-(void)updateLength;


@end


#endif