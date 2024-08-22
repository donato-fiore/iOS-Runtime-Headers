// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSPUSHBACKSTREAM_H
#define ICSPUSHBACKSTREAM_H

@class NSString;
@protocol ICSInputByteStream;

#import <Foundation/Foundation.h>


@interface ICSPushbackStream : NSObject <ICSInputByteStream>

 {
    id<ICSInputByteStream> *_underStream;
    char * _pbData;
    int _pbCursor;
    BOOL _readPastEOS;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)eos;
-(BOOL)pushBack:(char)arg0 ;
-(char)peek;
-(char)read;
-(id)initWithInputStream:(id)arg0 ;
-(void)dealloc;


@end


#endif