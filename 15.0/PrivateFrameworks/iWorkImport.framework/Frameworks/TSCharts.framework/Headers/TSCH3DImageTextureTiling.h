// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DIMAGETEXTURETILING_H
#define TSCH3DIMAGETEXTURETILING_H



#import "TSCH3DBaseImageTextureTiling.h"

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling

@property (nonatomic) int face; // ivar: _face
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) BOOL reveal; // ivar: _reveal
@property (nonatomic) int scontinuity; // ivar: _sContinuity
@property (nonatomic) int tcontinuity; // ivar: _tContinuity
@property (nonatomic) int wrap; // ivar: _wrap
@property (nonatomic) int xposition; // ivar: _xPosition
@property (nonatomic) int yposition; // ivar: _yPosition


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)copyFromBaseImageTextureTiling:(id)arg0 ;
-(void)restoreDefault;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif