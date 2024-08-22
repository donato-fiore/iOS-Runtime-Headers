// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCLOUDKITITEMRECORD_H
#define WFCLOUDKITITEMRECORD_H

@class CKRecord;
@protocol WFCloudKitItem;

#import <Foundation/Foundation.h>


@interface WFCloudKitItemRecord : NSObject

@property (readonly, nonatomic) NSObject<WFCloudKitItem> *item; // ivar: _item
@property (readonly, nonatomic) CKRecord *record; // ivar: _record


-(id)initWithRecord:(id)arg0 item:(id)arg1 ;


@end


#endif