// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NDDOWNLOADREQUEST_H
#define NDDOWNLOADREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NDDownloadRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, nonatomic) NSInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentID:(id)arg0 options:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif