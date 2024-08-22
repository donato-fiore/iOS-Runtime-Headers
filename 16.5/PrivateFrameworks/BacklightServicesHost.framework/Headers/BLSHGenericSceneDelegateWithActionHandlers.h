// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHGENERICSCENEDELEGATEWITHACTIONHANDLERS_H
#define BLSHGENERICSCENEDELEGATEWITHACTIONHANDLERS_H

@class NSMutableArray, NSString;
@protocol BLSSceneDelegateWithActionHandlers;

#import <Foundation/Foundation.h>


@interface BLSHGenericSceneDelegateWithActionHandlers : NSObject <BLSSceneDelegateWithActionHandlers>

 {
    NSMutableArray *_actionHandlers;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addActionHandler:(id)arg0 forScene:(id)arg1 ;
-(void)removeActionHandler:(id)arg0 forScene:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;


@end


#endif