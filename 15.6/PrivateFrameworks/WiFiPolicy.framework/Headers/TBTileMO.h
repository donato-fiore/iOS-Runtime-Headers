// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBTILEMO_H
#define TBTILEMO_H

@class NSManagedObject, NSDate, NSString, NSSet;
@protocol TBTile;



@interface TBTileMO : NSManagedObject <TBTile>



@property (readonly, copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *etag;
@property (copy, nonatomic) NSString *etag;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger key;
@property (nonatomic) NSInteger key;
@property (readonly, nonatomic) NSUInteger networkCount;
@property (readonly, nonatomic) NSInteger networkCount;
@property (retain, nonatomic) NSSet *networks;
@property (readonly) Class superclass;


+(id)entityName;
+(id)fetchRequest;
+(id)generateNewTileObjectFromMOC:(id)arg0 ;
+(void)removeAllTilesInMOC:(id)arg0 ;
+(void)removeTilesUsingPredicate:(id)arg0 moc:(id)arg1 ;


@end


#endif