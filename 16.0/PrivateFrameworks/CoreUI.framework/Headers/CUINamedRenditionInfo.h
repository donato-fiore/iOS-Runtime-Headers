// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUINAMEDRENDITIONINFO_H
#define CUINAMEDRENDITIONINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUINamedRenditionInfo : NSObject <NSCopying>

 {
    *void _bitmap;
    *_renditionkeyfmt _keyFormat;
    NSInteger _platform;
}




+(int)subtypeFromIndexWithPlatform:(NSInteger)arg0 andIndex:(unsigned short)arg1 ;
+(int)subtypeToIndexWithPlatform:(NSInteger)arg0 andInput:(unsigned short)arg1 ;
-(BOOL)contentEqualForAttribute:(int)arg0 withRenditionInfo:(id)arg1 ;
-(BOOL)contentPresentForAttribute:(int)arg0 ;
-(BOOL)diverseContentPresentForAttribute:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNamedRenditionInfo:(id)arg0 ;
-(NSUInteger)numberOfBitsSet;
-(id)archivedData;
-(id)bitwiseAndWith:(id)arg0 ;
-(id)bitwiseOrWith:(id)arg0 forAttribute:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithData:(id)arg0 keyFormat:(struct _renditionkeyfmt *)arg1 andPlatform:(NSInteger)arg2 ;
-(id)initWithKeyFormat:(struct _renditionkeyfmt *)arg0 andPlatform:(NSInteger)arg1 ;
-(int)attributePresent:(int)arg0 withValue:(unsigned short)arg1 ;
-(unsigned short)getClosestValueOfAttribute:(int)arg0 withValue:(unsigned short)arg1 ;
-(unsigned short)getValueOfAttribute:(int)arg0 ;
-(void)clearAttributePresent:(int)arg0 withValue:(unsigned short)arg1 ;
-(void)dealloc;
-(void)decrementValue:(*NSInteger)arg0 forAttribute:(int)arg1 ;
-(void)incrementIndex:(*NSUInteger)arg0 inValues:(id)arg1 forAttribute:(int)arg2 ;
-(void)setAttributePresent:(int)arg0 withValue:(unsigned short)arg1 ;


@end


#endif