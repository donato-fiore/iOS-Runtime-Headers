// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEDSTATSCOHORTQUERYDEVICETYPE_H
#define FEDSTATSCOHORTQUERYDEVICETYPE_H

@class NSString;
@protocol FedStatsCohortQueryProtocol;

#import <Foundation/Foundation.h>


@interface FedStatsCohortQueryDeviceType : NSObject <FedStatsCohortQueryProtocol>



@property (retain) NSString *deviceType; // ivar: _deviceType


+(id)cohortInstance;
-(id)cohortKeyForParameters:(id)arg0 possibleError:(*id)arg1 ;
-(id)initWithDeviceType:(id)arg0 ;


@end


#endif