// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCCLOUDSYNCVERSIONS_H
#define BCCLOUDSYNCVERSIONS_H

@class NSManagedObject, NSString, NSPersistentHistoryToken, NSData;
@protocol BCCloudSyncVersions;



@interface BCCloudSyncVersions : NSManagedObject <BCCloudSyncVersions>



@property (nonatomic) NSInteger cloudVersion;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSPersistentHistoryToken *historyToken;
@property (nonatomic) NSInteger historyTokenOffset;
@property (nonatomic) NSInteger localVersion;
@property (copy, nonatomic) NSData *rawHistoryToken;
@property (nonatomic) NSInteger syncVersion;


-(id)mutableCopy;
-(void)configureFromSyncVersions:(id)arg0 ;


@end


#endif