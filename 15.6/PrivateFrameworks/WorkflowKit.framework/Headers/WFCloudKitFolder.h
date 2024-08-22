// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCLOUDKITFOLDER_H
#define WFCLOUDKITFOLDER_H

@class NSString, CKRecordID, NSData;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>


@interface WFCloudKitFolder : NSObject <WFCloudKitItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short icon; // ivar: _icon
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *recordSystemFieldsData; // ivar: _recordSystemFieldsData
@property (readonly) Class superclass;


+(BOOL)isFolderRecordID:(id)arg0 ;
+(id)collectionIdentifierForRecordID:(id)arg0 ;
+(id)properties;
+(id)recordIDWithZoneID:(id)arg0 collectionIdentifier:(id)arg1 ;
+(id)recordType;
-(id)initWithCollection:(id)arg0 identifier:(id)arg1 ;


@end


#endif