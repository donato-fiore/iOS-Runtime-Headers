// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMOFFICEARTMAPPER_H
#define WMOFFICEARTMAPPER_H



#import "CMDrawableMapper.h"
#import "WDAContent.h"

@interface WMOfficeArtMapper : CMDrawableMapper {
    BOOL mFloating;
    BOOL mIsMapped;
    BOOL mIsInsideGroup;
    WDAContent *mContent;
    unsigned int mCurrentPage;
}




-(BOOL)isInsideGroup;
-(id)blipAtIndex:(unsigned int)arg0 ;
-(id)initWithOadDrawable:(id)arg0 asFloating:(BOOL)arg1 parent:(id)arg2 ;
-(id)initWithWdOfficeArt:(id)arg0 parent:(id)arg1 ;
-(struct CGSize )expandedSizeForTextBox:(id)arg0 withState:(id)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapDiagramAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtGroupAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtImageAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtShapeAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtTextboxAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTextBoxAt:(id)arg0 withState:(id)arg1 ;
-(void)setBoundingBox;
-(void)setCurrentPage:(unsigned int)arg0 ;
-(void)setIsInsideGroup:(BOOL)arg0 ;
-(void)setWithClientData:(id)arg0 state:(id)arg1 ;


@end


#endif