// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHMAPPEDICONLISTLAYOUTPROVIDER_H
#define SBHMAPPEDICONLISTLAYOUTPROVIDER_H

@class NSMutableDictionary;
@protocol SBIconListLayoutProvider;

#import <Foundation/Foundation.h>


@interface SBHMappedIconListLayoutProvider : NSObject <SBIconListLayoutProvider>

 {
    NSMutableDictionary *_mappedIconLocations;
}


@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *targetListLayoutProvider; // ivar: _targetListLayoutProvider


-(id)initWithTargetListLayoutProvider:(id)arg0 ;
-(id)layoutForIconLocation:(id)arg0 ;
-(void)mapIconLocation:(id)arg0 toIconLocation:(id)arg1 ;


@end


#endif