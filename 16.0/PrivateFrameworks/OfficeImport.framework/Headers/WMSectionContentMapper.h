// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMSECTIONCONTENTMAPPER_H
#define WMSECTIONCONTENTMAPPER_H



#import "CMMapper.h"
#import "WDText.h"

@interface WMSectionContentMapper : CMMapper {
    WDText *wdText;
}




-(id)initWithWDText:(id)arg0 parent:(id)arg1 ;
-(id)paragraphAtIndex:(NSUInteger)arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTextFrameAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTextFrameStyleTo:(id)arg0 withState:(id)arg1 ;
-(void)updateTextFrameState:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif