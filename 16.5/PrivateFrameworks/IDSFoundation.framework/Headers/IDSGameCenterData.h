// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGAMECENTERDATA_H
#define IDSGAMECENTERDATA_H

@class NSString, NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSGameCenterData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *contactsAssociationID; // ivar: _contactsAssociationID
@property (retain, nonatomic) NSDate *contactsLastUpdatedDate; // ivar: _contactsLastUpdatedDate
@property (retain, nonatomic) NSNumber *contactsSharingState; // ivar: _contactsSharingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(id)compareAgainstData:(id)arg0 ;
-(id)description;
-(id)initWithAssociationID:(id)arg0 sharingState:(id)arg1 lastUpdatedDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif