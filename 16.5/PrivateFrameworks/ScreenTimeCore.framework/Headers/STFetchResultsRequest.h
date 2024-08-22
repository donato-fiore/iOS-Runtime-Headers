// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STFETCHRESULTSREQUEST_H
#define STFETCHRESULTSREQUEST_H

@class NSFetchRequest;

#import <Foundation/Foundation.h>


@interface STFetchResultsRequest : NSObject

@property (readonly, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest


+(id)requestWithFetchRequest:(id)arg0 ;
-(id)description;
-(id)initWithEntity:(id)arg0 ;
-(id)initWithEntity:(id)arg0 predicate:(id)arg1 ;
-(id)initWithEntity:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)initWithFetchRequest:(id)arg0 ;


@end


#endif