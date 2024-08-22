// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC27MAPSSYNCINCIDENTREPORTQUERY_H
#define _TTC8MAPSSYNC27MAPSSYNCINCIDENTREPORTQUERY_H

@class TtC8MapsSync17MapsSyncBaseQuery;



@interface _TtC8MapsSync27MapsSyncIncidentReportQuery : TtC8MapsSync17MapsSyncBaseQuery {
    ? _specifiedQuery;
}




+(id)signpostLog;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithOptions:(id)arg0 delegate:(id)arg1 ;
-(id)initWithQueryDelegate:(id)arg0 predicate:(id)arg1 ;
-(void)fetchContents:(id)arg0 ;
-(void)fetchContentsWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)fetchQueryContents:(id)arg0 ;
-(void)fetchQueryContentsWithCallbackQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif