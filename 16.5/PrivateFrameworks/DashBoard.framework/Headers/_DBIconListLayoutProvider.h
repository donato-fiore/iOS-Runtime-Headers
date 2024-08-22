// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DBICONLISTLAYOUTPROVIDER_H
#define _DBICONLISTLAYOUTPROVIDER_H

@class SBIconListFlowLayout;
@protocol SBIconListLayoutProvider;

#import <Foundation/Foundation.h>


@interface _DBIconListLayoutProvider : NSObject <SBIconListLayoutProvider>



@property (retain, nonatomic) SBIconListFlowLayout *layout; // ivar: _layout


-(id)initWithEnvironment:(id)arg0 ;
-(id)layoutForIconLocation:(id)arg0 ;


@end


#endif