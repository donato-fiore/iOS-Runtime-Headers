// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCESTATE_H
#define CKTRANSACTIONALCOMPONENTDATASOURCESTATE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CKTransactionalComponentDataSourceConfiguration.h"

@interface CKTransactionalComponentDataSourceState : NSObject

@property (readonly, nonatomic) CKTransactionalComponentDataSourceConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSArray *sections; // ivar: _sections


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)numberOfObjectsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSUInteger)hash;
-(id)description;
-(id)initWithConfiguration:(id)arg0 sections:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg0 ;
-(void)enumerateObjectsInSectionAtIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif