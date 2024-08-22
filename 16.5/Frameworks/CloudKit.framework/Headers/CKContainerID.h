// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTAINERID_H
#define CKCONTAINERID_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKContainerID : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (nonatomic) BOOL isAppleInternal; // ivar: _isAppleInternal
@property (nonatomic) BOOL isTestContainer; // ivar: _isTestContainer
@property (nonatomic) NSInteger specialContainerType; // ivar: _specialContainerType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 environment:(NSInteger)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)representativeDataclass;
-(id)sqliteRepresentation;
-(void)ck_bindInStatement:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif