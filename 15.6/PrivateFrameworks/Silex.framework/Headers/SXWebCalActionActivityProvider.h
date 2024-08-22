// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXWEBCALACTIONACTIVITYPROVIDER_H
#define SXWEBCALACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider;

#import <Foundation/Foundation.h>


@interface SXWebCalActionActivityProvider : NSObject <SXActionActivityProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;


@end


#endif