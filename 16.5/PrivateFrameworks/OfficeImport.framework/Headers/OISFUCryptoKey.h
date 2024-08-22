// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OISFUCRYPTOKEY_H
#define OISFUCRYPTOKEY_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface OISFUCryptoKey : NSObject {
    unsigned int mIterationCount;
    char * mKey;
    NSUInteger mKeyLength;
    NSData *mSaltData;
}


@property (readonly, nonatomic) NSString *passphrase; // ivar: _passphrase


-(NSUInteger)keyLength;
-(char *)keyData;
-(id)initAes128Key:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2 ;
-(id)initAes128KeyFromPassphrase:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2 ;
-(id)initAes128KeyFromPassphrase:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3 ;
-(id)initAes128KeyFromPassphrase:(id)arg0 iterationCount:(unsigned int)arg1 ;
-(id)initAes128KeyFromPassphrase:(id)arg0 iterationCount:(unsigned int)arg1 saltData:(id)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg0 withIterationCountAndSaltDataFromCryptoKey:(id)arg1 ;
-(id)saltData;
-(int)keyType;
-(unsigned int)iterationCount;
-(void)dealloc;


@end


#endif