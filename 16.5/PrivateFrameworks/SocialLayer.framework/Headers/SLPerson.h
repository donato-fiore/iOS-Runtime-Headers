// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLPERSON_H
#define SLPERSON_H

@class CNContact, CNContactStore, NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SLPerson : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (nonatomic) BOOL hasMutableContact; // ivar: _hasMutableContact
@property (copy, nonatomic) NSString *shortDisplayName; // ivar: _shortDisplayName
@property (retain, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData


+(BOOL)supportsSecureCoding;
+(id)createMutableContactWithHandle:(id)arg0 ;
+(id)errorForPersonDomain:(id)arg0 andCode:(NSInteger)arg1 ;
+(id)fetchMeContact;
+(id)keysForCNContact;
+(id)predicateForHandle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fetchCNContactWithHandle:(id)arg0 ;
-(id)initWithCSPerson:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHandle:(id)arg0 displayName:(id)arg1 ;
-(id)initWithPortraitPerson:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif