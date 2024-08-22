// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIMUTABLECATALOG_H
#define CUIMUTABLECATALOG_H



#import "CUICatalog.h"

@interface CUIMutableCatalog : CUICatalog {
    BOOL _checkRespondsTo;
    BOOL _respondsToCheck;
}




-(NSUInteger)_storageRefForRendition:(id)arg0 representsODRContent:(*BOOL)arg1 ;
-(id)_baseImageKeyForName:(id)arg0 ;
-(id)_baseKeyForName:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 fromBundle:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)insertCGImage:(struct CGImage *)arg0 name:(id)arg1 scale:(CGFloat)arg2 idiom:(NSInteger)arg3 subtype:(NSInteger)arg4 ;
-(void)insertCGImage:(struct CGImage *)arg0 withName:(id)arg1 andDescription:(id)arg2 ;
-(void)removeImageNamed:(id)arg0 scale:(CGFloat)arg1 idiom:(NSInteger)arg2 subtype:(NSInteger)arg3 ;
-(void)removeImageNamed:(id)arg0 withDescription:(id)arg1 ;
-(void)removeImagesNamed:(id)arg0 ;


@end


#endif