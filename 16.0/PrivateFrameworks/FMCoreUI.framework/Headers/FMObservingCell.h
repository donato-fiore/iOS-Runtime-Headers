// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMOBSERVINGCELL_H
#define FMOBSERVINGCELL_H

@class UITableViewCell, NSMutableDictionary, NSMutableSet;



@interface FMObservingCell : UITableViewCell

@property (retain, nonatomic) NSMutableDictionary *kvoObservationTokens; // ivar: _kvoObservationTokens
@property (retain, nonatomic) NSMutableSet *notificationTokens; // ivar: _notificationTokens
@property (weak, nonatomic) id *representedObject; // ivar: _representedObject


-(void)addKVOObservationToken:(id)arg0 forObject:(id)arg1 ;
-(void)addNotificationToken:(id)arg0 ;
-(void)addObserversForRepresentedObject:(id)arg0 ;
-(void)prepareForReuse;
-(void)removeKVOObservationTokens;
-(void)removeNotificationTokens;


@end


#endif