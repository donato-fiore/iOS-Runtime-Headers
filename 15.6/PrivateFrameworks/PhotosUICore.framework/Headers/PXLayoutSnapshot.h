// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLAYOUTSNAPSHOT_H
#define PXLAYOUTSNAPSHOT_H

@protocol PXLayoutEngineDataSourceSnapshot;

#import <Foundation/Foundation.h>


@interface PXLayoutSnapshot : NSObject

@property (readonly, nonatomic) CGRect contentRect; // ivar: _contentRect
@property (retain, nonatomic) NSObject<PXLayoutEngineDataSourceSnapshot> *dataSourceSnapshot; // ivar: _dataSourceSnapshot


-(id)description;
-(id)init;
-(id)initWithContentRect:(struct CGRect )arg0 ;
-(struct _PXLayoutGeometry )geometryForItem:(id)arg0 ;
-(void)enumerateGeometriesForItemsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;


@end


#endif