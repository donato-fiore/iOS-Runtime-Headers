// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSEXPRESSEVENTINFOWITHDETAIL_H
#define STSEXPRESSEVENTINFOWITHDETAIL_H

@class NSString;


#import "STSExpressEventInfo.h"

@interface STSExpressEventInfoWithDetail : STSExpressEventInfo

@property (readonly, nonatomic) NSString *detail; // ivar: _detail


-(id)initWithState:(unsigned int)arg0 detail:(id)arg1 ;


@end


#endif