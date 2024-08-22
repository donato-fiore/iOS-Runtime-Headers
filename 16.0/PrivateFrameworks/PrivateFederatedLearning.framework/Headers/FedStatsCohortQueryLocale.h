// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FEDSTATSCOHORTQUERYLOCALE_H
#define FEDSTATSCOHORTQUERYLOCALE_H

@class NSString;
@protocol FedStatsCohortQueryProtocol;

#import <Foundation/Foundation.h>


@interface FedStatsCohortQueryLocale : NSObject <FedStatsCohortQueryProtocol>



@property (readonly, nonatomic) NSString *deviceLocale; // ivar: _deviceLocale


+(id)cohortInstance;
-(id)cohortKeyForParameters:(id)arg0 possibleError:(*id)arg1 ;
-(id)init;


@end


#endif