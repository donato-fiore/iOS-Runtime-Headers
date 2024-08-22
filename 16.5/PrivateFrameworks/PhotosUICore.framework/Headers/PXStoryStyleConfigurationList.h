// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSTYLECONFIGURATIONLIST_H
#define PXSTORYSTYLECONFIGURATIONLIST_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PXStoryStyleConfiguration.h"

@interface PXStoryStyleConfigurationList : NSObject

@property (readonly, copy, nonatomic) NSArray *autoEditStyleConfigurations; // ivar: _autoEditStyleConfigurations
@property (readonly, nonatomic) PXStoryStyleConfiguration *initialStyleConfiguration; // ivar: _initialStyleConfiguration


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithAutoEditStyleConfigurations:(id)arg0 initialStyleConfiguration:(id)arg1 ;


@end


#endif