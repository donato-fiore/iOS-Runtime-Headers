// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFSEARCHABLEINDEX_IOS_H
#define MFSEARCHABLEINDEX_IOS_H

@class EDSearchableIndex, NSString;
@protocol EFLoggable, MFDiagnosticsGenerator;



@interface MFSearchableIndex_iOS : EDSearchableIndex <EFLoggable, MFDiagnosticsGenerator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(BOOL)isPluggedIn;
-(BOOL)shouldCancelSearchQuery;
-(id)initWithName:(id)arg0 dataSource:(id)arg1 reasonProvider:(id)arg2 ;
-(id)powerObservable;
-(void)_indexMessage:(id)arg0 includeBody:(BOOL)arg1 indexingType:(NSInteger)arg2 ;
-(void)addSearchQueryCancelable:(id)arg0 ;
-(void)indexMessages:(id)arg0 includeBody:(BOOL)arg1 indexingType:(NSInteger)arg2 ;
-(void)logPowerEventWithIdentifier:(id)arg0 eventData:(id)arg1 ;
-(void)removeSearchQueryCancelable:(id)arg0 ;


@end


#endif