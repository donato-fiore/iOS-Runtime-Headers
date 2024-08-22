// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKQUERY_H
#define CKQUERY_H

@class NSPredicate, NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKQuery : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 predicate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif