// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHCUSTOMICONLISTLAYOUTPROVIDER_H
#define SBHCUSTOMICONLISTLAYOUTPROVIDER_H

@class NSDictionary;
@protocol SBIconListLayoutProvider, SBIconListLayout;

#import <Foundation/Foundation.h>


@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider>



@property (readonly, nonatomic) NSObject<SBIconListLayout> *defaultLayout; // ivar: _defaultLayout
@property (readonly, copy, nonatomic) NSDictionary *listLayouts; // ivar: _listLayouts


-(id)init;
-(id)initWithListLayouts:(id)arg0 ;
-(id)initWithListLayouts:(id)arg0 defaultLayout:(id)arg1 ;
-(id)layoutForIconLocation:(id)arg0 ;


@end


#endif