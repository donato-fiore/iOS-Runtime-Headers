// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMNICKNAMEENCRYPTIONPREKEY_H
#define IMNICKNAMEENCRYPTIONPREKEY_H

@class NSData;

#import <Foundation/Foundation.h>

#import "IMNicknameFieldEncryptionKey.h"
#import "IMNicknameFieldTaggingKey.h"
#import "IMNicknameRecordTaggingKey.h"

@interface IMNicknameEncryptionPreKey : NSObject

@property (retain, nonatomic) NSData *derivedData; // ivar: _derivedData
@property (readonly, nonatomic) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
@property (readonly, nonatomic) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property (retain, nonatomic) NSData *generatedData; // ivar: _generatedData
@property (readonly, nonatomic) IMNicknameRecordTaggingKey *recordTaggingKey;


+(id)generatePreKeyWithError:(*id)arg0 ;
+(id)preKeyWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)_subDerivedKeyDataAtIndex:(NSUInteger)arg0 ;
-(id)dataRepresentation;
-(id)initWithGeneratedData:(id)arg0 derivedData:(id)arg1 ;


@end


#endif