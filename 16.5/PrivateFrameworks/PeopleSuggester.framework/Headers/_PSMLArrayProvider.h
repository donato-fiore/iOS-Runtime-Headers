// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSMLARRAYPROVIDER_H
#define _PSMLARRAYPROVIDER_H

@class MLArrayBatchProvider;

#import <Foundation/Foundation.h>


@interface _PSMLArrayProvider : NSObject

@property (retain, nonatomic) MLArrayBatchProvider *MLArrayProvider; // ivar: _MLArrayProvider
@property (nonatomic) int clusteringCount; // ivar: _clusteringCount
@property (nonatomic) int recencyCount; // ivar: _recencyCount


-(id)initWithProvider:(id)arg0 clusteringCount:(int)arg1 recencyCount:(int)arg2 ;


@end


#endif