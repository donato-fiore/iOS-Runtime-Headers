// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNICKNAMEENCRYPTIONKEY_H
#define IMNICKNAMEENCRYPTIONKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface IMNicknameEncryptionKey : NSObject

@property (readonly) *void bytes;
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger length;


-(id)initWithData:(id)arg0 ;
-(void)dealloc;


@end


#endif