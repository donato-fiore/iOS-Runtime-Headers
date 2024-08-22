// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STINCLUDEWEBSITEDATAGROUPSPECIFIERPROVIDER_H
#define STINCLUDEWEBSITEDATAGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STRootGroupSpecifierProvider.h"

@interface STIncludeWebsiteDataGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *toggleIncludeWebsiteDataSpecifier; // ivar: _toggleIncludeWebsiteDataSpecifier


-(id)includeWebsiteData:(id)arg0 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;
-(void)setIncludeWebsiteData:(id)arg0 specifier:(id)arg1 ;


@end


#endif