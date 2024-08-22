// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMERGEABLEVALUEID_H
#define CKMERGEABLEVALUEID_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKMergeableValueID : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // ivar: _encrypted
@property (readonly, copy, nonatomic) NSData *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *recordFieldName; // ivar: _recordFieldName
@property (readonly, copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (readonly, copy, nonatomic) NSString *zoneName; // ivar: _zoneName
@property (readonly, copy, nonatomic) NSString *zoneOwner; // ivar: _zoneOwner


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMergeableValueID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 zoneName:(id)arg1 zoneOwner:(id)arg2 ;
-(id)initWithData:(id)arg0 zoneName:(id)arg1 zoneOwner:(id)arg2 recordName:(id)arg3 recordFieldName:(id)arg4 encrypted:(BOOL)arg5 ;
-(id)initWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif