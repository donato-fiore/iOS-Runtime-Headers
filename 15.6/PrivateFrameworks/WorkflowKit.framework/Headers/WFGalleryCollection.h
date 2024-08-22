// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGALLERYCOLLECTION_H
#define WFGALLERYCOLLECTION_H

@class CKRecordID, NSString, NSDate, NSData, NSArray;
@protocol WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>



@property (readonly, nonatomic) CKRecordID *base; // ivar: _base
@property (readonly, nonatomic) NSString *collectionDescription; // ivar: _collectionDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSInteger minVersion; // ivar: _minVersion
@property (readonly, nonatomic) NSDate *modifiedAt; // ivar: _modifiedAt
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedIdioms; // ivar: _supportedIdioms
@property (readonly, nonatomic) NSArray *workflows; // ivar: _workflows


+(id)properties;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)referenceActionForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setCreatedAt:(id)arg0 modifiedAt:(id)arg1 createdBy:(id)arg2 ;


@end


#endif