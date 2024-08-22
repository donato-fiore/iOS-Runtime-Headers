// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WMFIELDMAPPER_H
#define WMFIELDMAPPER_H

@class NSMutableString, NSString;


#import "WMParagraphMapper.h"

@interface WMFieldMapper : WMParagraphMapper {
    int mMode;
    unsigned int mType;
    NSMutableString *mMarkerText;
    NSString *mLink;
}




-(id)initWithWDFieldMarker:(id)arg0 parent:(id)arg1 ;
-(void)mapFieldMarkerAt:(id)arg0 marker:(id)arg1 withState:(id)arg2 ;
-(void)mapRunAt:(id)arg0 run:(id)arg1 withState:(id)arg2 ;


@end


#endif