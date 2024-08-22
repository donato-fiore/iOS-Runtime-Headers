// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPENCRYPTEDCLOUDRECORD_H
#define MSPENCRYPTEDCLOUDRECORD_H

@class NSDate, NSString, CKRecord;
@protocol MSPCloudRecord;

#import <Foundation/Foundation.h>


@interface MSPEncryptedCloudRecord : NSObject <MSPCloudRecord>

 {
    BOOL _compressNewData;
}


@property (readonly, nonatomic) NSDate *cloudRecordModificationDate;
@property (readonly, nonatomic) NSString *cloudRecordName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecord *record; // ivar: _record
@property (readonly) Class superclass;


+(id)arrayOfCKRecordsFromArray:(id)arg0 ;
+(id)arrayOfEncryptedRecordsFromArray:(id)arg0 ;
-(id)initWithCKRecord:(id)arg0 isNewlyCreatedRecord:(BOOL)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif