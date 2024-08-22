// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCLOUDKITSYNCFLAGS_H
#define WFCLOUDKITSYNCFLAGS_H

@class NSString, CKRecordID, NSData;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>


@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultShortcutsVersion; // ivar: _defaultShortcutsVersion
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (nonatomic) BOOL migratedVoiceShortcuts; // ivar: _migratedVoiceShortcuts
@property (copy, nonatomic) NSData *recordSystemFieldsData; // ivar: _recordSystemFieldsData
@property (readonly) Class superclass;


+(BOOL)isCloudKitSyncFlagsRecordID:(id)arg0 ;
+(id)properties;
+(id)recordIDWithZoneID:(id)arg0 ;
+(id)recordType;
-(id)initWithZoneID:(id)arg0 ;


@end


#endif