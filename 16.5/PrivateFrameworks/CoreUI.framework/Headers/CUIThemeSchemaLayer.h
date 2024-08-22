// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUITHEMESCHEMALAYER_H
#define CUITHEMESCHEMALAYER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CUIThemeSchemaLayer : NSObject

@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *renditions; // ivar: _renditions


+(id)layerWithRenditions:(id)arg0 name:(id)arg1 index:(NSUInteger)arg2 ;
-(CGFloat)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg0 leftsOrTops:(*id)arg1 ;
-(id)description;
-(id)initWithRenditions:(id)arg0 name:(id)arg1 index:(NSUInteger)arg2 ;
-(void)calculateColumLefts:(*id)arg0 rowTops:(*id)arg1 totalSize:(struct CGSize *)arg2 forPartFeatures:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif