// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLAYOUTSECTION_H
#define PXLAYOUTSECTION_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PXLayoutSection : NSObject {
    NSMutableDictionary *_geometriesByKind;
}


@property (nonatomic, getter=isAccurate) BOOL accurate; // ivar: _accurate
@property (nonatomic) CGRect frame; // ivar: _frame
@property (retain, nonatomic) NSArray *geometryKinds; // ivar: _geometryKinds
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) NSInteger index; // ivar: _index
@property (nonatomic) CGSize size;


-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)geometriesWithKind:(NSInteger)arg0 ;
-(id)init;
-(void)enumerateGeometriesWithBlock:(id)arg0 ;
-(void)setGeometries:(id)arg0 withKind:(NSInteger)arg1 ;


@end


#endif