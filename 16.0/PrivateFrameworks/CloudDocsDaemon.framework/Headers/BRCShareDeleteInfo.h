// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSHAREDELETEINFO_H
#define BRCSHAREDELETEINFO_H

@class CKRecord, CKRecordID;

#import <Foundation/Foundation.h>


@interface BRCShareDeleteInfo : NSObject

@property (readonly, nonatomic) CKRecord *emptyRecord; // ivar: _emptyRecord
@property (readonly, nonatomic) CKRecordID *shareID; // ivar: _shareID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithShareID:(id)arg0 emptyRecord:(id)arg1 ;


@end


#endif