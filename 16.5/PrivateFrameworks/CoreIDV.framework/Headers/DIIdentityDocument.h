// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIIDENTITYDOCUMENT_H
#define DIIDENTITYDOCUMENT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface DIIdentityDocument : NSObject

@property (readonly, nonatomic) NSData *encryptedData; // ivar: _encryptedData


-(id)initWithEncryptedData:(id)arg0 ;


@end


#endif