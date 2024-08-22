// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSTAILSPINREQUESTMO_H
#define DRSTAILSPINREQUESTMO_H

@class NSNumber;


#import "DRSRequestMO.h"

@interface DRSTailspinRequestMO : DRSRequestMO

@property (nonatomic) BOOL includeOsLog;
@property (nonatomic) BOOL includeOsSignpost;
@property (copy, nonatomic) NSNumber *maxMAT;
@property (copy, nonatomic) NSNumber *minMAT;
@property (nonatomic) BOOL scrubbed;


+(id)fetchRequest;


@end


#endif