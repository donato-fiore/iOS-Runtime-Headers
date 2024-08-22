// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETVARIABLE_H
#define ETVARIABLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ETModelDef.h"

@interface ETVariable : NSObject

@property float initializationAlpha; // ivar: _initializationAlpha
@property float initializationBeta; // ivar: _initializationBeta
@property NSUInteger initializationMode; // ivar: _initializationMode
@property (nonatomic) NSUInteger kind; // ivar: _kind
@property (retain, nonatomic) NSString *layerName; // ivar: _layerName
@property (weak, nonatomic) ETModelDef *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)copyData;
-(id)getOpaqueCopy;
-(id)initWithModelDef:(id)arg0 ;
-(id)swapWithOpaqueCopy:(id)arg0 ;
-(void)updateWithData:(id)arg0 ;


@end


#endif