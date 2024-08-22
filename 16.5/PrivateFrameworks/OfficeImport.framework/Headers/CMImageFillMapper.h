// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMIMAGEFILLMAPPER_H
#define CMIMAGEFILLMAPPER_H



#import "CMMapper.h"
#import "OADFill.h"

@interface CMImageFillMapper : CMMapper {
    OADFill *mFill;
    CGRect mBounds;
}




-(BOOL)isCropped;
-(id)blipAtIndex:(unsigned int)arg0 ;
-(id)convertMetafileToPdf:(id)arg0 state:(id)arg1 ;
-(id)initWithOadFill:(id)arg0 bounds:(struct CGRect )arg1 parent:(id)arg2 ;
-(id)mainSubBlip;
-(id)mapImageFill:(id)arg0 withState:(id)arg1 ;
-(struct CGRect )uncroppedBox;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapImageFillAt:(id)arg0 toStyle:(id)arg1 withState:(id)arg2 ;
-(void)mapNonImageFillAt:(id)arg0 toStyle:(id)arg1 withState:(id)arg2 ;


@end


#endif