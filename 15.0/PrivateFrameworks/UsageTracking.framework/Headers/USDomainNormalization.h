// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USDOMAINNORMALIZATION_H
#define USDOMAINNORMALIZATION_H


#import <Foundation/Foundation.h>


@interface USDomainNormalization : NSObject {
    *UIDNA _idna;
}




-(id)normalizeDomainName:(id)arg0 ;
-(id)normalizeDomainNames:(id)arg0 ;
-(id)normalizeURL:(id)arg0 ;
-(void)dealloc;


@end


#endif