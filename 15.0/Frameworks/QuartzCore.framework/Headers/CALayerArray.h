// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALAYERARRAY_H
#define CALAYERARRAY_H

@class NSArray;



@interface CALayerArray : NSArray {
    _CALayerArrayIvars _ivars;
}




-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLayers:(*id)arg0 count:(NSUInteger)arg1 retain:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif