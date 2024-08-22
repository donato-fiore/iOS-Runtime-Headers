// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATMUTABLETASKPROGRESS_H
#define CATMUTABLETASKPROGRESS_H

@class NSError, NSDictionary;


#import "CATTaskProgress.h"

@interface CATMutableTaskProgress : CATTaskProgress

@property (nonatomic) NSInteger completedUnitCount;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isCancelable;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) NSUInteger phase;
@property (retain, nonatomic) id *resultObject;
@property (nonatomic) NSInteger totalUnitCount;
@property (retain, nonatomic) NSDictionary *userInfo;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationUUID:(id)arg0 ;
-(id)initWithOperationUUID:(id)arg0 requestClass:(Class)arg1 ;
-(void)setProgress:(id)arg0 ;


@end


#endif