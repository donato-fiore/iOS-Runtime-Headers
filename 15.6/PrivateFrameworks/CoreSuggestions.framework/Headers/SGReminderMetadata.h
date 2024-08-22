// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGREMINDERMETADATA_H
#define SGREMINDERMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SGRecordId.h"

@interface SGReminderMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) SGRecordId *recordId; // ivar: _recordId
@property (readonly, nonatomic) NSString *sourceUniqueIdentifier; // ivar: _sourceUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReminderMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(id)arg0 sourceUniqueIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif