// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPOSTACTIONHANDLERMANAGER_H
#define SXPOSTACTIONHANDLERMANAGER_H

@class NSString, NSMutableDictionary;
@protocol SXPostActionHandlerManager;

#import <Foundation/Foundation.h>


@interface SXPostActionHandlerManager : NSObject <SXPostActionHandlerManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *postActionHandlers; // ivar: _postActionHandlers
@property (readonly) Class superclass;


-(id)init;
-(void)addPostActionHandler:(id)arg0 forActionType:(id)arg1 ;
-(void)handledAction:(id)arg0 state:(NSUInteger)arg1 ;
-(void)removePostActionHandler:(id)arg0 forActionType:(id)arg1 ;


@end


#endif