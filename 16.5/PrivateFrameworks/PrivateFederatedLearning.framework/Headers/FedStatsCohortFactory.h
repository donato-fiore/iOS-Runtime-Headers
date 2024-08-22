// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEDSTATSCOHORTFACTORY_H
#define FEDSTATSCOHORTFACTORY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FedStatsCohortFactory : NSObject

@property (readonly) NSDictionary *cohortObjects; // ivar: _cohortObjects


+(id)cohortQueryFieldByName:(id)arg0 ;
+(id)sharedInstance;
-(id)init;


@end


#endif