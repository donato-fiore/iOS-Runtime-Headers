// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHILDSERVICEFILTER_H
#define HFCHILDSERVICEFILTER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface HFChildServiceFilter : NSObject

@property (readonly, copy, nonatomic) NSSet *childServiceTypes; // ivar: _childServiceTypes


-(id)filteredChildServicesForParentService:(id)arg0 ;
-(id)initWithChildServiceTypes:(id)arg0 ;


@end


#endif