// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSDOCUMENT_H
#define TPSDOCUMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, NAIdentifiable;


#import "TPSSerializableObject.h"
#import "TPSNotification.h"

@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable>



@property (copy, nonatomic) NSString *clonedFromID; // ivar: _clonedFromID
@property (copy, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (copy, nonatomic) TPSNotification *notification; // ivar: _notification
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userLanguageCode; // ivar: _userLanguageCode
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID


+(BOOL)supportsSecureCoding;
+(id)deliveryInfoForDictionary:(id)arg0 ;
+(id)deliveryInfoIdForDictionary:(id)arg0 ;
+(id)documentsForDictionary:(id)arg0 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 identifierKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithContentDictionary:(id)arg0 metadata:(id)arg1 ;


@end


#endif