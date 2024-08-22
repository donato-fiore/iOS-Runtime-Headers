// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDETECTIONQUERY_H
#define PKDETECTIONQUERY_H

@class NSString, CHQuery;
@protocol CHQueryDelegate;


#import "PKQuery.h"

@interface PKDetectionQuery : PKQuery <CHQueryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CHQuery *query; // ivar: _query
@property (readonly) Class superclass;


-(void)dealloc;
-(void)pause;
-(void)queryDidUpdateResult:(id)arg0 ;
-(void)start;
-(void)teardown;


@end


#endif