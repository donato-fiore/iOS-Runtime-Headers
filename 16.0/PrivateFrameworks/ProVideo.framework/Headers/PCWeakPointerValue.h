// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCWEAKPOINTERVALUE_H
#define PCWEAKPOINTERVALUE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PCWeakPointerValue : NSObject <NSCopying>

 {
    id *_zeroingWeakValue;
    BOOL _hasZeroingWeakReference;
}


@property (readonly, nonatomic) id *nonretainedObjectValue;
@property (readonly, nonatomic) *void pointerValue; // ivar: _pointerValue


+(id)arrayFromWeakPointerValueArray:(id)arg0 ;
+(id)setFromWeakPointerValueSet:(id)arg0 ;
+(id)valueWithNonretainedObject:(id)arg0 ;
+(id)valueWithPointer:(*void)arg0 ;
+(id)weakPointerValueArrayFromArray:(id)arg0 ;
+(id)weakPointerValueSetFromSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNonretainedObject:(id)arg0 ;
-(id)initWithPointer:(*void)arg0 ;
-(void)dealloc;


@end


#endif