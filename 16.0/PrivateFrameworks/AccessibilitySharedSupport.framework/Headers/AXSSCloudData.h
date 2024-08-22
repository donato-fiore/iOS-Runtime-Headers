// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSCLOUDDATA_H
#define AXSSCLOUDDATA_H

@class NSArray, CKServerChangeToken;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface AXSSCloudData : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *openTransaction; // ivar: _openTransaction
@property (retain, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain, nonatomic) NSArray *recordsToUpdate; // ivar: _recordsToUpdate
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken




@end


#endif