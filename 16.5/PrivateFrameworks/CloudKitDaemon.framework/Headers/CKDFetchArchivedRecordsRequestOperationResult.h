// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHARCHIVEDRECORDSREQUESTOPERATIONRESULT_H
#define CKDFETCHARCHIVEDRECORDSREQUESTOPERATIONRESULT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CKDFetchArchivedRecordsRequestOperationResult : NSObject

@property (retain, nonatomic) NSData *resultServerChangeTokenData; // ivar: _resultServerChangeTokenData
@property (nonatomic) NSInteger status; // ivar: _status


-(id)init;


@end


#endif