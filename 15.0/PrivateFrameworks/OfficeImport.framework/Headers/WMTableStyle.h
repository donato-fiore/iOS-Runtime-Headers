// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WMTABLESTYLE_H
#define WMTABLESTYLE_H



#import "WMStyle.h"
#import "WDTableProperties.h"

@interface WMTableStyle : WMStyle {
    WDTableProperties *mWdTableProperties;
}




-(id)initWithWDTableProperties:(id)arg0 ;
-(void)addTableProperties:(id)arg0 ;


@end


#endif