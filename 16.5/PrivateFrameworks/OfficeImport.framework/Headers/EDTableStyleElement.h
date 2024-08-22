// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDTABLESTYLEELEMENT_H
#define EDTABLESTYLEELEMENT_H

@class NSString;
@protocol EDKeyedObject, NSCopying;

#import <Foundation/Foundation.h>

#import "EDCollection.h"
#import "EDDifferentialStyle.h"

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying>

 {
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tableStyleElementWithResources:(id)arg0 ;
-(NSInteger)key;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)differentialStyle;
-(id)initWithResources:(id)arg0 ;
-(int)type;
-(unsigned int)bandSize;
-(void)setBandSize:(unsigned int)arg0 ;
-(void)setDifferentialStyle:(id)arg0 ;
-(void)setDifferentialStyleWithIndex:(NSUInteger)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif