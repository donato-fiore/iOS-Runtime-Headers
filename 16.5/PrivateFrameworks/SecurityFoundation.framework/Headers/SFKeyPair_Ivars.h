// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFKEYPAIR_IVARS_H
#define SFKEYPAIR_IVARS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFKeyPair_Ivars : NSObject {
    *__SecKey secKey;
    NSString *privateKeyDomain;
}




-(void)dealloc;


@end


#endif