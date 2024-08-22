// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FEDSTATSCOHORTQUERYFIELDGENERIC_H
#define FEDSTATSCOHORTQUERYFIELDGENERIC_H

@class NSString;
@protocol FedStatsCohortQueryProtocol;

#import <Foundation/Foundation.h>


@interface FedStatsCohortQueryFieldGeneric : NSObject <FedStatsCohortQueryProtocol>



@property (readonly, nonatomic) NSString *cohortName; // ivar: _cohortName


+(id)cohortInstance;
+(id)cohortQueryFieldWithKey:(id)arg0 ;
-(id)cohortKeyForParameters:(id)arg0 possibleError:(*id)arg1 ;
-(id)initQueryFieldWithKey:(id)arg0 ;


@end


#endif