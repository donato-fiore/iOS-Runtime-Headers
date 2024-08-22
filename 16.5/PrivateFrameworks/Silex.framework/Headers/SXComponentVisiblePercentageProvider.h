// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTVISIBLEPERCENTAGEPROVIDER_H
#define SXCOMPONENTVISIBLEPERCENTAGEPROVIDER_H

@class NSString;
@protocol SXVisiblePercentageProviding;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXComponentVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(CGFloat)visiblePercentageOfObject:(id)arg0 ;
-(id)initWithViewport:(id)arg0 ;


@end


#endif