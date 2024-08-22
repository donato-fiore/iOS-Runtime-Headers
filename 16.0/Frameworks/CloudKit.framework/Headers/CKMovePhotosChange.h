// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMOVEPHOTOSCHANGE_H
#define CKMOVEPHOTOSCHANGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKRecord.h"
#import "CKRecordID.h"

@interface CKMovePhotosChange : NSObject <NSSecureCoding>



@property (retain, nonatomic) CKRecord *destinationRecord; // ivar: _destinationRecord
@property (retain, nonatomic) NSString *sourceRecordChangeTag; // ivar: _sourceRecordChangeTag
@property (retain, nonatomic) CKRecordID *sourceRecordID; // ivar: _sourceRecordID


+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif