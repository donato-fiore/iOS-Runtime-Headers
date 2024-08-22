// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSSUBMITLOGTOCKCONTAINERREQUESTMO_H
#define DRSSUBMITLOGTOCKCONTAINERREQUESTMO_H

@class NSString, NSData;


#import "DRSSubmitLogRequestMO.h"

@interface DRSSubmitLogToCKContainerRequestMO : DRSSubmitLogRequestMO

@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *fileAssetField;
@property (retain, nonatomic) NSData *recordDictionaryData;
@property (copy, nonatomic) NSString *recordType;


+(id)fetchRequest;


@end


#endif