// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSTOUCHREMOTESOCKET_H
#define TVRMSTOUCHREMOTESOCKET_H

@class NSOutputStream, NSString;
@protocol NSStreamDelegate, TVRMSTouchRemoteSocketDelegate;

#import <Foundation/Foundation.h>


@interface TVRMSTouchRemoteSocket : NSObject <NSStreamDelegate>

 {
    NSOutputStream *_outputStream;
    NSString *_host;
    unsigned int _port;
    unsigned int _encryptionKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRMSTouchRemoteSocketDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)sendTouchCode:(NSInteger)arg0 timeInMilliseconds:(unsigned int)arg1 location:(struct CGPoint )arg2 ;
-(id)_encryptData:(id)arg0 ;
-(id)initWithHost:(id)arg0 port:(int)arg1 encryptionKey:(int)arg2 ;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif