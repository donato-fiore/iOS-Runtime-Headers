// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSHISTORYITEM_H
#define MSHISTORYITEM_H

@class TtC8MapsSync14MapsSyncObject;



@interface MSHistoryItem : TtC8MapsSync14MapsSyncObject {
    ? _position;
    ? _positionIndex;
}


@property (nonatomic) CGFloat position;
@property (nonatomic) NSInteger positionIndex;


+(Class)managedClass;
+(id)optionsWith:(id)arg0 ;
+(void)beforeFetchWithStore:(id)arg0 ;
+(void)pruneHistoryItemsWithStore:(id)arg0 ;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 position:(CGFloat)arg1 positionIndex:(NSInteger)arg2 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif