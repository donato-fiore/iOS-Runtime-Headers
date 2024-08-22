// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDOMAINSHARDITEM_H
#define BCSDOMAINSHARDITEM_H

@class NSString, NSDate, NSURL;
@protocol BCSDomainShardItemProtocol, NSCopying, NSSecureCoding;


#import "BCSShardItem.h"

@interface BCSDomainShardItem : BCSShardItem <BCSDomainShardItemProtocol, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *base64EncodedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger shardCount;
@property (readonly, nonatomic) NSInteger startIndex;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(id)shardItemWithFileURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 startIndex:(NSInteger)arg1 shardCount:(NSInteger)arg2 type:(NSInteger)arg3 expirationDate:(id)arg4 ;
-(id)initWithJSONObj:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithRecord:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif