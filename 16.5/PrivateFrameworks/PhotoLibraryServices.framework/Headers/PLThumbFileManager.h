// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTHUMBFILEMANAGER_H
#define PLTHUMBFILEMANAGER_H

@class PLThumbFileManagerCore;



@interface PLThumbFileManager : PLThumbFileManagerCore



-(BOOL)_writeImage:(id)arg0 forThumbIdentifier:(id)arg1 ;
-(BOOL)setImageForEntry:(id)arg0 withIdentifier:(id)arg1 orIndex:(NSUInteger)arg2 photoUUID:(id)arg3 options:(id)arg4 ;
-(struct CGImage *)createImageWithIdentifier:(id)arg0 orIndex:(NSUInteger)arg1 ;


@end


#endif