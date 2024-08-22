// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXONEUPPRESENTATIONCONFIGURATION_H
#define PUPXONEUPPRESENTATIONCONFIGURATION_H

@class NSString;
@protocol PXOneUpPresentationConfiguration;

#import <Foundation/Foundation.h>


@interface PUPXOneUpPresentationConfiguration : NSObject <PXOneUpPresentationConfiguration>



@property (nonatomic) NSUInteger activity; // ivar: _activity
@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interactiveMode; // ivar: _interactiveMode
@property (readonly, nonatomic) NSUInteger pu_activity;
@property (readonly, nonatomic) NSInteger pu_interactiveMode;
@property (readonly) Class superclass;


-(id)init;


@end


#endif