// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCMUTABLECLOUDDATA_H
#define BCMUTABLECLOUDDATA_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCCloudData, NSSecureCoding, BCCloudDataPrivacyDelegate;

#import <Foundation/Foundation.h>


@interface BCMutableCloudData : NSObject <BCCloudData, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deletedFlag; // ivar: _deletedFlag
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger editGeneration; // ivar: _editGeneration
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localRecordID; // ivar: _localRecordID
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate; // ivar: _privacyDelegate
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syncGeneration; // ivar: _syncGeneration
@property (copy, nonatomic) CKRecord *systemFields; // ivar: _systemFields


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)init;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementEditGeneration;


@end


#endif