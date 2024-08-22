// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WMPARAGRAPHMAPPER_H
#define WMPARAGRAPHMAPPER_H



#import "CMMapper.h"
#import "WDParagraph.h"
#import "OIXMLElement.h"

@interface WMParagraphMapper : CMMapper {
    WDParagraph *wdParagraph;
    OIXMLElement *mActiveNode;
    BOOL mIsDeleted;
}




+(void)mapPlaceholderAt:(id)arg0 rect:(struct CGRect )arg1 withState:(id)arg2 ;
-(BOOL)containsOfficeArt;
-(BOOL)isCollapsable:(id)arg0 ;
-(BOOL)isTextFrame;
-(id)activeNode;
-(id)initWithBlock:(id)arg0 parent:(id)arg1 ;
-(id)runAtIndex:(NSUInteger)arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapFieldMarkerAt:(id)arg0 marker:(id)arg1 withState:(id)arg2 ;
-(void)mapParagraphBodyWithState:(id)arg0 ;
-(void)mapRunAt:(id)arg0 run:(id)arg1 withState:(id)arg2 ;


@end


#endif