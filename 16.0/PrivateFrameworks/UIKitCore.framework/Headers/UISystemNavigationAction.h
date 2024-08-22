// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISYSTEMNAVIGATIONACTION_H
#define UISYSTEMNAVIGATIONACTION_H

@class BSAction, NSArray;



@interface UISystemNavigationAction : BSAction

@property (readonly, nonatomic) NSArray *destinations; // ivar: _destinations


-(BOOL)sendResponseForDestination:(NSUInteger)arg0 ;
-(NSInteger)UIActionType;
-(id)URLForDestination:(NSUInteger)arg0 ;
-(id)_destinationContextForResponseDestination:(NSUInteger)arg0 ;
-(id)bundleIdForDestination:(NSUInteger)arg0 ;
-(id)initWithDestinationContexts:(id)arg0 forResponseOnQueue:(id)arg1 withHandler:(id)arg2 ;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)sceneIdentifierForDestination:(NSUInteger)arg0 ;
-(id)titleForDestination:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif