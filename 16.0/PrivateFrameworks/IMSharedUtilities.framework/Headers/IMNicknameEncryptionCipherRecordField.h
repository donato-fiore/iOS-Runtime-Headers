// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMNICKNAMEENCRYPTIONCIPHERRECORDFIELD_H
#define IMNICKNAMEENCRYPTIONCIPHERRECORDFIELD_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "IMNicknameEncryptionFieldTag.h"

@interface IMNicknameEncryptionCipherRecordField : NSObject

@property (retain, nonatomic) NSData *IV; // ivar: _IV
@property (retain, nonatomic) NSData *cipherData; // ivar: _cipherData
@property (retain, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (retain, nonatomic) IMNicknameEncryptionFieldTag *tag; // ivar: _tag


+(id)cipherRecordFieldWithFieldName:(id)arg0 dataRepresentation:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)description;
-(id)initWithFieldName:(id)arg0 cipherData:(id)arg1 IV:(id)arg2 tag:(id)arg3 ;


@end


#endif