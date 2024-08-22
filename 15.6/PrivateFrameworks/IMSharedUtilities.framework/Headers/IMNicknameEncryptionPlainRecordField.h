// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNICKNAMEENCRYPTIONPLAINRECORDFIELD_H
#define IMNICKNAMEENCRYPTIONPLAINRECORDFIELD_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface IMNicknameEncryptionPlainRecordField : NSObject

@property (readonly, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (readonly, nonatomic) NSData *plainData; // ivar: _plainData


-(id)description;
-(id)initWithFieldName:(id)arg0 plainData:(id)arg1 ;
-(void)dealloc;


@end


#endif