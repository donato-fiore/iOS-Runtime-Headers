// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDRECORDOBJECT_H
#define PKCLOUDRECORDOBJECT_H

@class NSMutableDictionary, NSSet;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>


@interface PKCloudRecordObject : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_recordIDToRecord;
}


@property (readonly, nonatomic) NSObject<PKCloudStoreCoding> *item;
@property (readonly, nonatomic) NSSet *records;


+(BOOL)supportsSecureCoding;
-(id)_descriptionWithDetailedOutput:(BOOL)arg0 ;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecords:(id)arg0 ;
-(id)primaryIdentifier;
-(void)applyCloudRecordObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif