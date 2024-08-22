// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUIAPPICONGRIDLAYOUTPROVIDER_H
#define APUIAPPICONGRIDLAYOUTPROVIDER_H

@protocol SBIconListLayoutProvider;

#import <Foundation/Foundation.h>


@interface APUIAppIconGridLayoutProvider : NSObject <SBIconListLayoutProvider>



@property (nonatomic) NSUInteger mode; // ivar: _mode


-(id)layoutForIconLocation:(id)arg0 ;


@end


#endif