// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCLOUDSTOREUPLOADITEMCONFIGURATION_H
#define PKCLOUDSTOREUPLOADITEMCONFIGURATION_H

@class NSSet, NSDictionary;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>


@interface PKCloudStoreUploadItemConfiguration : NSObject <NSSecureCoding>

 {
    NSUInteger _itemType;
}


@property (retain, nonatomic) NSSet *cloudStoreZones; // ivar: _cloudStoreZones
@property (nonatomic) NSUInteger codingType; // ivar: _codingType
@property (nonatomic) BOOL detectConflicts; // ivar: _detectConflicts
@property (retain, nonatomic) NSObject<PKCloudStoreCoding> *item; // ivar: _item
@property (copy, nonatomic) NSDictionary *recordSpecificKeys; // ivar: _recordSpecificKeys
@property (nonatomic) BOOL returnRecords; // ivar: _returnRecords


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(id)initWithItem:(id)arg0 recordSpecificKeys:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif