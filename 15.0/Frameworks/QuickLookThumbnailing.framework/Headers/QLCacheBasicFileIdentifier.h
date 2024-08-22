// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLCACHEBASICFILEIDENTIFIER_H
#define QLCACHEBASICFILEIDENTIFIER_H

@protocol NSSecureCoding;


#import "QLCacheFileIdentifier.h"

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>



@property (readonly) NSUInteger fileId; // ivar: _fileId
@property (readonly) fsid fsid; // ivar: _fsid


+(BOOL)supportsSecureCoding;
+(Class)versionedFileIdentifierClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileId:(NSUInteger)arg0 fsid:(struct fsid )arg1 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif