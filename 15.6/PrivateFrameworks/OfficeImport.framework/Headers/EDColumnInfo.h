// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDCOLUMNINFO_H
#define EDCOLUMNINFO_H

@class NSString;
@protocol NSCopying, EDKeyedObject;

#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDWorksheet.h"
#import "EDReference.h"

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject>

 {
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    int mWidth;
    BOOL mHidden;
    EDReference *mRange;
    NSUInteger mStyleIndex;
    unsigned char mOutlineLevel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columnInfoWithResources:(id)arg0 worksheet:(id)arg1 ;
-(BOOL)isHidden;
-(CGFloat)width;
-(NSInteger)key;
-(NSUInteger)styleIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResources:(id)arg0 worksheet:(id)arg1 ;
-(id)range;
-(id)style;
-(int)widthInXlUnits;
-(unsigned char)outlineLevel;
-(void)setHidden:(BOOL)arg0 ;
-(void)setOutlineLevel:(unsigned char)arg0 ;
-(void)setRange:(id)arg0 ;
-(void)setRangeWithFirstColumn:(int)arg0 lastColumn:(int)arg1 ;
-(void)setStyle:(id)arg0 ;
-(void)setStyleIndex:(NSUInteger)arg0 ;
-(void)setWidth:(CGFloat)arg0 ;
-(void)setWidthInXlUnits:(int)arg0 ;


@end


#endif