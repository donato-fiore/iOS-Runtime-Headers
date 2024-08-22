// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENENCRYPTEDCONTENTINFO_H
#define ENENCRYPTEDCONTENTINFO_H

@class NSString, NSMutableString;

#import <Foundation/Foundation.h>


@interface ENEncryptedContentInfo : NSObject

@property (copy, nonatomic) NSString *cipher; // ivar: _cipher
@property (retain, nonatomic) NSMutableString *cipherText; // ivar: _cipherText
@property (copy, nonatomic) NSString *hint; // ivar: _hint
@property NSInteger keyLength; // ivar: _keyLength


-(id)init;


@end


#endif