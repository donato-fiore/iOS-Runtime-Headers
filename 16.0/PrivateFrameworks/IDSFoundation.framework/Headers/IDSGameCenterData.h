// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGAMECENTERDATA_H
#define IDSGAMECENTERDATA_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSGameCenterData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *contactsAssociationID; // ivar: _contactsAssociationID
@property (retain, nonatomic) NSNumber *contactsSharingState; // ivar: _contactsSharingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactsAssociationID:(id)arg0 contactsSharingState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif