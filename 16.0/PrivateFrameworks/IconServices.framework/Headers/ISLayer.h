// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISLAYER_H
#define ISLAYER_H

@class NSMutableArray, NSString, NSArray;
@protocol ISEffect;

#import <Foundation/Foundation.h>

#import "ISLayer.h"

@interface ISLayer : NSObject

@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) CGRect bounds;
@property (nonatomic) NSUInteger coordinateSystem; // ivar: _coordinateSystem
@property (retain, nonatomic) NSObject<ISEffect> *effect; // ivar: _effect
@property (nonatomic) NSUInteger flipped; // ivar: _flipped
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) NSMutableArray *internalSublayers; // ivar: _internalSublayers
@property (weak, nonatomic) ISLayer *internalSuperlayer; // ivar: _internalSuperlayer
@property (retain, nonatomic) ISLayer *mask; // ivar: _mask
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGPoint position;
@property (nonatomic) CGSize size;
@property (readonly, copy, nonatomic) NSArray *sublayers;
@property (readonly, nonatomic) ISLayer *superlayer;


-(id)debugDescription;
-(id)init;
-(void)addSublayer:(id)arg0 ;
-(void)insertSublayer:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)removeFromSuperlayer;


@end


#endif