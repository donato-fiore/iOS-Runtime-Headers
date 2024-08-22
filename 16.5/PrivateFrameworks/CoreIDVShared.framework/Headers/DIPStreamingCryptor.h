// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIPSTREAMINGCRYPTOR_H
#define DIPSTREAMINGCRYPTOR_H


#import <Foundation/Foundation.h>


@interface DIPStreamingCryptor : NSObject {
    *_CCCryptor _cryptor;
}




-(id)encryptBuffer:(id)arg0 ;
-(id)finish;
-(id)initWithKey:(id)arg0 ;
-(void)addAuthParameter:(id)arg0 ;
-(void)addIVParameter:(id)arg0 ;


@end


#endif