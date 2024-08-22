// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNICKNAMEENCRYPTIONCIPHERRECORDFIELD_H
#define IMNICKNAMEENCRYPTIONCIPHERRECORDFIELD_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "IMNicknameEncryptionFieldTag.h"

@interface IMNicknameEncryptionCipherRecordField : NSObject

@property (readonly, nonatomic) NSData *IV; // ivar: _IV
@property (readonly, nonatomic) NSData *cipherData; // ivar: _cipherData
@property (readonly, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (readonly, nonatomic) IMNicknameEncryptionFieldTag *tag; // ivar: _tag


+(id)cipherRecordFieldWithFieldName:(id)arg0 dataRepresentation:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)description;
-(id)initWithFieldName:(id)arg0 cipherData:(id)arg1 IV:(id)arg2 tag:(id)arg3 ;
-(void)dealloc;


@end


#endif