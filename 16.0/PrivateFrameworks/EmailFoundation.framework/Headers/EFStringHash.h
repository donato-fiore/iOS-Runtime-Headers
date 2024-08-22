// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSTRINGHASH_H
#define EFSTRINGHASH_H

@class NSString;
@protocol NSCopying, NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface EFStringHash : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger int64Value;
@property (readonly, nonatomic) NSInteger primitiveHash; // ivar: _primitiveHash
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_hexStringFromHash:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithHash:(NSInteger)arg0 ;
-(id)initWithMD5Digest:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)redactedStringValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif