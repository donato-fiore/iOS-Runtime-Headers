// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDRECORDRESPONSE_H
#define CKDRECORDRESPONSE_H

@class NSString, CKRecord, CKRecordID;

#import <Foundation/Foundation.h>


@interface CKDRecordResponse : NSObject

@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID


-(id)CKPropertiesDescription;
-(id)description;


@end


#endif