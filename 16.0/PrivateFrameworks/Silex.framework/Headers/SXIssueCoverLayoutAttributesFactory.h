// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXISSUECOVERLAYOUTATTRIBUTESFACTORY_H
#define SXISSUECOVERLAYOUTATTRIBUTESFACTORY_H

@class NSString;
@protocol SXIssueCoverLayoutAttributesFactory;

#import <Foundation/Foundation.h>


@interface SXIssueCoverLayoutAttributesFactory : NSObject <SXIssueCoverLayoutAttributesFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAttributesWithIssueCover:(id)arg0 options:(id)arg1 ;


@end


#endif