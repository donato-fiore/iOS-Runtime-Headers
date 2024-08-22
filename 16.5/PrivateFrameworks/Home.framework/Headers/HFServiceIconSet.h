// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSERVICEICONSET_H
#define HFSERVICEICONSET_H

@class NSSet;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFServiceIconSet : NSObject

@property (readonly, nonatomic) NSSet *allIcons; // ivar: _allIcons
@property (readonly, nonatomic) NSObject<HFIconDescriptor> *defaultIcon; // ivar: _defaultIcon


+(id)placeholderIconSet;
+(id)setWithDefaultIcon:(id)arg0 ;
+(id)setWithDefaultIcon:(id)arg0 alternateIcons:(id)arg1 ;
+(id)setWithImageIdentifier:(id)arg0 ;


@end


#endif