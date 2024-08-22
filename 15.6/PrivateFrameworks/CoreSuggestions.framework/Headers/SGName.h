// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGNAME_H
#define SGNAME_H

@class NSString;


#import "SGObject.h"
#import "SGExtractionInfo.h"

@interface SGName : SGObject

@property (readonly, nonatomic) SGExtractionInfo *extractionInfo; // ivar: _extractionInfo
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic) NSString *suffix; // ivar: _suffix


+(BOOL)supportsSecureCoding;
+(id)nameWithFirstName:(id)arg0 lastName:(id)arg1 middleName:(id)arg2 fullName:(id)arg3 prefix:(id)arg4 suffix:(id)arg5 withRecordId:(id)arg6 origin:(id)arg7 ;
+(id)nameWithFirstName:(id)arg0 lastName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3 ;
+(id)nameWithFirstName:(id)arg0 withRecordId:(id)arg1 origin:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToName:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirstName:(id)arg0 middleName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 prefix:(id)arg4 suffix:(id)arg5 recordId:(id)arg6 origin:(id)arg7 ;
-(id)initWithFirstName:(id)arg0 middleName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 prefix:(id)arg4 suffix:(id)arg5 recordId:(id)arg6 origin:(id)arg7 extractionInfo:(id)arg8 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif