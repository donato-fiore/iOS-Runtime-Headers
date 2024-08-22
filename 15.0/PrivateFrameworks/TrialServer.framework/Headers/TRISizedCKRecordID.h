// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISIZEDCKRECORDID_H
#define TRISIZEDCKRECORDID_H

@class CKRecordID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRISizedCKRecordID : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (readonly, nonatomic) CKRecordID *recordId; // ivar: _recordId


+(id)recordIDWithRecordId:(id)arg0 downloadSize:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecordID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDownloadSize:(NSUInteger)arg0 ;
-(id)copyWithReplacementRecordId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRecordId:(id)arg0 downloadSize:(NSUInteger)arg1 ;


@end


#endif