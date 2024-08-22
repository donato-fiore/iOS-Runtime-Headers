// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIDENTITYDOCUMENT_H
#define PKIDENTITYDOCUMENT_H

@class NSData, DIIdentityDocument;

#import <Foundation/Foundation.h>


@interface PKIdentityDocument : NSObject

@property (readonly, nonatomic) NSData *encryptedData;
@property (retain, nonatomic) DIIdentityDocument *wrapped; // ivar: _wrapped


-(id)description;
-(id)initWithDIIdentityDocument:(id)arg0 ;


@end


#endif