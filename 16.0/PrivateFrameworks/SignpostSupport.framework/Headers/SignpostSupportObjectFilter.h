// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTSUPPORTOBJECTFILTER_H
#define SIGNPOSTSUPPORTOBJECTFILTER_H


#import <Foundation/Foundation.h>


@interface SignpostSupportObjectFilter : NSObject

@property (readonly, copy, nonatomic) id *filterBlock; // ivar: _filterBlock


-(BOOL)passesObject:(id)arg0 ;
-(id)initWithFilterBlock:(id)arg0 ;


@end


#endif