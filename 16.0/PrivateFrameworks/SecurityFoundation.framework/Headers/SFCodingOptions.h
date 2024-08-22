// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCODINGOPTIONS_H
#define SFCODINGOPTIONS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SFCodingOptions : NSObject <NSCopying>

 {
    id *_codingOptionsInternal;
}


@property (nonatomic) NSInteger encoding;
@property (copy, nonatomic) NSString *encryptionPassphrase;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif