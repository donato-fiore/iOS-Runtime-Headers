// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHORTCUTCONCERNINGREPORT_H
#define WFSHORTCUTCONCERNINGREPORT_H

@class NSString, CKRecordID, NSData, WFFileRepresentation;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>


@interface WFShortcutConcerningReport : NSObject <WFCloudKitItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (copy, nonatomic) NSString *reportMessage; // ivar: _reportMessage
@property (copy, nonatomic) NSString *reportReason; // ivar: _reportReason
@property (copy, nonatomic) CKRecordID *shortcut; // ivar: _shortcut
@property (retain, nonatomic) WFFileRepresentation *shortcutContent; // ivar: _shortcutContent
@property (copy, nonatomic) NSString *status; // ivar: _status
@property (readonly) Class superclass;


+(id)properties;
+(id)recordType;
-(id)initWithReason:(id)arg0 shortcutContent:(id)arg1 ;


@end


#endif