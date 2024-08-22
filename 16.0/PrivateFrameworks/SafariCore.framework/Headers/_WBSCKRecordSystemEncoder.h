// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WBSCKRECORDSYSTEMENCODER_H
#define _WBSCKRECORDSYSTEMENCODER_H

@class CKRecord;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _WBSCKRecordSystemEncoder : NSObject <NSSecureCoding>



@property (readonly, weak, nonatomic) CKRecord *record; // ivar: _record


+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif