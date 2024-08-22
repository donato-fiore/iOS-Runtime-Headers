// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSSUBMITLOGREQUESTMO_H
#define DRSSUBMITLOGREQUESTMO_H

@class NSString;


#import "DRSRequestMO.h"

@interface DRSSubmitLogRequestMO : DRSRequestMO

@property (copy, nonatomic) NSString *logType;
@property (nonatomic) BOOL transferOwnership;


+(id)fetchRequest;


@end


#endif