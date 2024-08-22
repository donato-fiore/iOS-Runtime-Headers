// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLUIDLOOKUPLISTWRAPPER_H
#define TSTCELLUIDLOOKUPLISTWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTCellUIDLookupListWrapper : NSObject <NSCopying>

 {
    TSTCellUIDLookupList _UIDLookupList;
}


@property (readonly, nonatomic) NSUInteger count;


-(*void)UIDLookupList;
-(id)copyByPruningAgainstTable:(id)arg0 behavior:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCellUIDList:(id)arg0 ;
-(struct TSKUIDStructCoord )cellUIDAtIndex:(NSUInteger)arg0 ;
-(void)addCellRegion:(id)arg0 withColumnUIDs:(*void)arg1 rowUIDs:(*void)arg2 ;
-(void)addCellUID:(struct TSKUIDStructCoord *)arg0 ;
-(void)reserve:(NSUInteger)arg0 ;


@end


#endif