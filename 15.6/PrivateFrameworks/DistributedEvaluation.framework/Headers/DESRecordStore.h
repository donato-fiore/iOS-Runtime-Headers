// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESRECORDSTORE_H
#define DESRECORDSTORE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DESRecordStore : NSObject {
    NSString *_bundleId;
}


@property (readonly, nonatomic, getter=isPermitted) BOOL permitted;
@property (readonly, nonatomic) BOOL shouldMakeRecord;


// +(void)_getServiceProxyWithErrorHandler:(id)arg0 block:(unk)arg1  ;
-(BOOL)shouldMakeRecordWithFrequency:(NSUInteger)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)deleteAllSavedRecordsWithCompletion:(id)arg0 ;
-(void)deleteSavedRecordWithIdentfier:(id)arg0 completion:(id)arg1 ;
-(void)fetchNativeRecordDataForRecordUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchSavedRecordInfoWithCompletion:(id)arg0 ;
-(void)saveCoreDuetEvent:(id)arg0 completion:(id)arg1 ;
-(void)saveRecordWithData:(id)arg0 recordInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif