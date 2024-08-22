// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREFAMILYMEMBERCONTACTITEM_H
#define CNUICOREFAMILYMEMBERCONTACTITEM_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSInteger contactType; // ivar: _contactType
@property (readonly, nonatomic) NSString *formattedName; // ivar: _formattedName
@property (readonly, nonatomic) BOOL hasBeenPersisted; // ivar: _hasBeenPersisted
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) BOOL isProposed; // ivar: _isProposed
@property (readonly, nonatomic) BOOL isUnreachable; // ivar: _isUnreachable
@property (readonly, nonatomic) NSInteger whitelistStatus; // ivar: _whitelistStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 formattedName:(id)arg1 imageData:(id)arg2 isUnreachable:(BOOL)arg3 isProposed:(BOOL)arg4 contactType:(NSInteger)arg5 whitelistStatus:(NSInteger)arg6 hasBeenPersisted:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif