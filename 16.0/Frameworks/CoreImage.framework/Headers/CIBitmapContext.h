// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBITMAPCONTEXT_H
#define CIBITMAPCONTEXT_H



#import "CIContext.h"

@interface CIBitmapContext : CIContext {
    *CIBitmapContextPrivate _bcpriv;
}




+(id)context;
+(id)contextWithBitmap:(*void)arg0 rowBytes:(NSInteger)arg1 bounds:(struct CGRect )arg2 format:(int)arg3 ;
+(id)contextWithBitmap:(*void)arg0 rowBytes:(NSInteger)arg1 bounds:(struct CGRect )arg2 format:(int)arg3 options:(id)arg4 ;
+(id)contextWithOptions:(id)arg0 ;
-(BOOL)setBitmap:(*void)arg0 rowBytes:(NSInteger)arg1 bounds:(struct CGRect )arg2 format:(int)arg3 ;
-(id)init;
-(id)initWithBitmap:(*void)arg0 rowBytes:(NSInteger)arg1 bounds:(struct CGRect )arg2 format:(int)arg3 ;
-(id)initWithBitmap:(*void)arg0 rowBytes:(NSInteger)arg1 bounds:(struct CGRect )arg2 format:(int)arg3 options:(id)arg4 ;
-(id)initWithOptions:(id)arg0 ;
-(struct CGRect )bounds;
-(void)dealloc;
-(void)drawImage:(id)arg0 inRect:(struct CGRect )arg1 fromRect:(struct CGRect )arg2 ;


@end


#endif