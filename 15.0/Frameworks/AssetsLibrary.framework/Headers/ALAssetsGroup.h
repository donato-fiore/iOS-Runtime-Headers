// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ALASSETSGROUP_H
#define ALASSETSGROUP_H


#import <Foundation/Foundation.h>

#import "ALAssetsGroupPrivate.h"

@interface ALAssetsGroup : NSObject

@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (retain, nonatomic) ALAssetsGroupPrivate *internal; // ivar: _internal


-(BOOL)addAsset:(id)arg0 ;
-(BOOL)isValid;
-(NSInteger)numberOfAssets;
-(id)_typeAsString;
-(id)_uuid;
-(id)description;
-(id)initWithPhotoAlbum:(id)arg0 library:(id)arg1 type:(NSUInteger)arg2 ;
-(id)valueForProperty:(id)arg0 ;
-(struct CGImage *)posterImage;
-(void)_enumerateAssetsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)dealloc;
-(void)enumerateAssetsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateAssetsUsingBlock:(id)arg0 ;
-(void)enumerateAssetsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)setAssetsFilter:(id)arg0 ;


@end


#endif