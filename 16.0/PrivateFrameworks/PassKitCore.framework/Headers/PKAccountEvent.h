// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTEVENT_H
#define PKACCOUNTEVENT_H

@class NSString, NSDate, NSSet;
@protocol PKCloudStoreCoding;

#import <Foundation/Foundation.h>


@interface PKAccountEvent : NSObject <PKCloudStoreCoding>



@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) BOOL blockNotification; // ivar: _blockNotification
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSSet *items; // ivar: _items
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;
@property (readonly, nonatomic) NSUInteger updateReasons; // ivar: _updateReasons


+(BOOL)supportsSecureCoding;
+(NSInteger)accountEventTypeFromRecord:(id)arg0 ;
+(id)accountIdentifierFromRecord:(id)arg0 ;
+(id)eventIdentifierFromRecordName:(id)arg0 ;
+(id)recordNamePrefix;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountEvent:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)description;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)primaryIdentifier;
-(id)recordName;
-(id)recordNameForItem:(id)arg0 ;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(void)_encodeServerDataForCloudStoreCoder:(id)arg0 ;
-(void)addUpdateReasons:(NSUInteger)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif