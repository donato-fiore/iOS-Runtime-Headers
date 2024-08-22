// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDATABASERESULTFETCHOPERATION_H
#define WFDATABASERESULTFETCHOPERATION_H

@class NSEntityDescription;

#import <Foundation/Foundation.h>


@interface WFDatabaseResultFetchOperation : NSObject

@property (readonly, nonatomic) NSEntityDescription *entity;


-(NSInteger)countWithContext:(id)arg0 error:(*id)arg1 ;
-(id)resultsWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif