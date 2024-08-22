// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC19MAPSSYNCHISTORYITEM_H
#define _TTC8MAPSSYNC19MAPSSYNCHISTORYITEM_H

@class TtC8MapsSync16MapsSyncBaseItem;



@interface _TtC8MapsSync19MapsSyncHistoryItem : TtC8MapsSync16MapsSyncBaseItem {
    ? _position;
}


@property (nonatomic, readonly) CGFloat position;


+(id)fetchHistoryItemForIdentifier:(id)arg0 ;
+(void)fetch:(NSInteger)arg0 sort:(NSInteger)arg3 ascending:(BOOL)arg4 completion:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif