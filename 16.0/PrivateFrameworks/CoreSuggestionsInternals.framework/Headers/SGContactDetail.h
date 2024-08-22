// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCONTACTDETAIL_H
#define SGCONTACTDETAIL_H

@class NSString, SGExtractionInfo, SGRecordId;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SGDuplicateKey.h"

@interface SGContactDetail : NSObject <NSCopying>

 {
    NSString *_normalizedValue;
}


@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey; // ivar: _duplicateKey
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo; // ivar: _extractionInfo
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *normalizedValue;
@property (readonly, nonatomic) SGRecordId *recordId; // ivar: _recordId
@property (readonly, nonatomic) NSString *sourceKey; // ivar: _sourceKey
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)contactDetail:(id)arg0 label:(id)arg1 type:(NSUInteger)arg2 recordId:(id)arg3 duplicateKey:(id)arg4 sourceKey:(id)arg5 context:(id)arg6 extractionInfo:(id)arg7 ;
+(id)contactDetailFromEntity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactDetail:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithValue:(id)arg0 label:(id)arg1 type:(NSUInteger)arg2 recordId:(id)arg3 duplicateKey:(id)arg4 sourceKey:(id)arg5 context:(id)arg6 extractionInfo:(id)arg7 ;


@end


#endif