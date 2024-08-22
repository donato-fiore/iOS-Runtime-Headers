// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMPARAGRAPHSTYLEMAPPER_H
#define WMPARAGRAPHSTYLEMAPPER_H



#import "CMMapper.h"
#import "WDParagraphProperties.h"
#import "WDParagraph.h"
#import "WMParagraphStyle.h"

@interface WMParagraphStyleMapper : CMMapper {
    WDParagraphProperties *wdParaProperties;
    WDParagraph *wdParagraph;
    WMParagraphStyle *mStyle;
}




-(BOOL)checkListId:(NSInteger)arg0 level:(unsigned char)arg1 ;
-(BOOL)getListLevel:(char *)arg0 andListIndex:(*int)arg1 fromStyleOnly:(BOOL)arg2 ;
-(BOOL)isListItem;
-(id)bulletLabelForIndex:(int)arg0 inLevelDescription:(id)arg1 listState:(id)arg2 ;
-(id)initWithWDParagraph:(id)arg0 parent:(id)arg1 isInTextFrame:(BOOL)arg2 ;
-(id)labelStringWithGap:(id)arg0 ;
-(void)destyleEmptyParagraph;
-(void)getListLevel:(char *)arg0 andListIndex:(*int)arg1 foundListLevel:(*BOOL)arg2 foundListIndex:(*BOOL)arg3 fromParagraphProperties:(id)arg4 ;
-(void)getListLevel:(char *)arg0 andListIndex:(*int)arg1 foundListLevel:(*BOOL)arg2 foundListIndex:(*BOOL)arg3 fromStyle:(id)arg4 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapBulletAt:(id)arg0 forIndex:(int)arg1 inLevelDescription:(id)arg2 listState:(id)arg3 ;
-(void)mapBulletFromListId:(int)arg0 listLevel:(unsigned char)arg1 at:(id)arg2 document:(id)arg3 state:(id)arg4 ;
-(void)mapListStyleAt:(id)arg0 state:(id)arg1 ;
-(void)mapListStyleFromParagraphStyleWithState:(id)arg0 ;
-(void)mapParagraphProperties;
-(void)mapParagraphStyle;
-(void)mapStyleFromListId:(int)arg0 listLevel:(unsigned char)arg1 document:(id)arg2 state:(id)arg3 ;
-(void)updateOutlineStateWithListId:(int)arg0 listLevel:(unsigned char)arg1 document:(id)arg2 state:(id)arg3 ;


@end


#endif