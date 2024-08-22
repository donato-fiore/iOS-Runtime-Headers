// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USERNAVIGATIONDROPINTERACTION_H
#define USERNAVIGATIONDROPINTERACTION_H

@class UIDropInteraction, NSString;
@protocol UIDropInteractionDelegate, UIDropInteractionDelegate_Private;



@interface UserNavigationDropInteraction : UIDropInteraction <UIDropInteractionDelegate, UIDropInteractionDelegate_Private>

 {
    id *_navigationHandler;
    BOOL _opensNewTab;
    NSInteger _tabOrder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithOpensNewTab:(BOOL)arg0 tabOrder:(NSInteger)arg1 navigationHandler:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;


@end


#endif