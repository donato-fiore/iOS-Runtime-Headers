// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXBUTTONCOMPONENTACTIONPROVIDER_H
#define SXBUTTONCOMPONENTACTIONPROVIDER_H

@class NSString;
@protocol SXButtonComponentActionProvider, SXAction;

#import <Foundation/Foundation.h>


@interface SXButtonComponentActionProvider : NSObject <SXButtonComponentActionProvider>



@property (readonly, nonatomic) NSObject<SXAction> *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAction:(id)arg0 ;


@end


#endif