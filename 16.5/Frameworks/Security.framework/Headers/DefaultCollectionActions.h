// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEFAULTCOLLECTIONACTIONS_H
#define DEFAULTCOLLECTIONACTIONS_H

@class NSString;
@protocol SFAnalyticsCollectionAction;

#import <Foundation/Foundation.h>


@interface DefaultCollectionActions : NSObject <SFAnalyticsCollectionAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)autoBugCaptureWithType:(id)arg0 subType:(id)arg1 domain:(id)arg2 ;
-(void)tapToRadar:(id)arg0 description:(id)arg1 radar:(id)arg2 componentName:(id)arg3 componentVersion:(id)arg4 componentID:(id)arg5 ;


@end


#endif