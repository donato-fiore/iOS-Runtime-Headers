// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMSECTIONMAPPER_H
#define WMSECTIONMAPPER_H



#import "CMMapper.h"
#import "WDSection.h"

@interface WMSectionMapper : CMMapper {
    WDSection *wdSection;
    float mTopMargin;
    float mLeftMargin;
    BOOL mBreakAtStart;
    BOOL mBreakAtEnd;
    BOOL mIsTitlePage;
}




+(BOOL)isContentEmpty:(id)arg0 ;
-(float)leftMargin;
-(float)topMargin;
-(id)initWithWDSection:(id)arg0 breakAtStart:(BOOL)arg1 breakAtEnd:(BOOL)arg2 parent:(id)arg3 ;
-(void)MapSectionStyleAt:(id)arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapFooterAt:(id)arg0 withState:(id)arg1 ;
-(void)mapHeaderAt:(id)arg0 withState:(id)arg1 ;
-(void)setLeftMargin:(float)arg0 ;
-(void)setTopMargin:(float)arg0 ;


@end


#endif