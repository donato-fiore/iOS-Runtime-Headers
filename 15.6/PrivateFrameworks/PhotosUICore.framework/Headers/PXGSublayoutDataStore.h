// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGSUBLAYOUTDATASTORE_H
#define PXGSUBLAYOUTDATASTORE_H

@class NSString;
@protocol PXGDiagnosticsProvider;

#import <Foundation/Foundation.h>


@interface PXGSublayoutDataStore : NSObject <PXGDiagnosticsProvider>

 {
    NSInteger _capacity;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) *? geometries; // ivar: _geometries
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *? infos; // ivar: _infos
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(NSInteger)indexOfSublayout:(id)arg0 ;
-(id)sublayoutAtIndex:(NSInteger)arg0 ;
-(id)sublayoutProviderAtIndex:(NSInteger)arg0 ;
-(struct ? )geometryForSublayout:(id)arg0 ;
-(unsigned int)spriteIndexOriginForSublayout:(id)arg0 ;
-(void)_insertRange:(struct _NSRange )arg0 ;
-(void)_invalidateVersion;
-(void)dealloc;
-(void)enumerateSublayoutGeometriesInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateSublayoutGeometriesUsingBlock:(id)arg0 ;
-(void)enumerateSublayoutsInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateSublayoutsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateSublayoutsUsingBlock:(id)arg0 ;
-(void)insertSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertSublayoutProvider:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)removeSublayoutsInRange:(struct _NSRange )arg0 ;


@end


#endif