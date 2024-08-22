// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWPROCESSCONFIGURATION_H
#define SWPROCESSCONFIGURATION_H

@class NSString;
@protocol SWProcessConfiguration;

#import <Foundation/Foundation.h>


@interface SWProcessConfiguration : NSObject <SWProcessConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldRunAtBackgroundPriority; // ivar: _shouldRunAtBackgroundPriority
@property (readonly) Class superclass;


-(id)initWithBackgroundPriority:(BOOL)arg0 ;


@end


#endif