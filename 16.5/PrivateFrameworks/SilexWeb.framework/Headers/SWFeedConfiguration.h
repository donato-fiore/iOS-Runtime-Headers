// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWFEEDCONFIGURATION_H
#define SWFEEDCONFIGURATION_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface SWFeedConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (copy, nonatomic) NSSet *selectors; // ivar: _selectors


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSelectors:(id)arg0 configuration:(id)arg1 ;


@end


#endif