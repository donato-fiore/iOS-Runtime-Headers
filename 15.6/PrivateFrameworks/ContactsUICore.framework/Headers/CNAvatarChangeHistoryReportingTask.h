// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATARCHANGEHISTORYREPORTINGTASK_H
#define CNAVATARCHANGEHISTORYREPORTINGTASK_H

@class CNTask, NSArray;
@protocol CNAvatarCacheChangeListenerDelegate;



@interface CNAvatarChangeHistoryReportingTask : CNTask

@property (readonly, nonatomic) NSObject<CNAvatarCacheChangeListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers


-(id)initWithIdentifiers:(id)arg0 delegate:(id)arg1 ;
-(id)run:(*id)arg0 ;


@end


#endif