// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKEYCOMMANDMANAGER_H
#define TSKEYCOMMANDMANAGER_H


#import <Foundation/Foundation.h>


@interface TSKeyCommandManager : NSObject {
    ? keyCommandManager;
    ? keyCommandProvider;
}


@property (nonatomic) BOOL hasBeenTraversed; // ivar: hasBeenTraversed


-(id)init;
-(id)keyCommands;
-(void)handleKeyPressWithCommand:(id)arg0 ;
-(void)handleKeyPressWithKey:(id)arg0 flags:(NSInteger)arg1 ;
-(void)invalidate;
-(void)registerController:(id)arg0 withSelector:(SEL)arg1 ;
-(void)registerKeys:(id)arg0 ;
-(void)registerProviderWithScrollView:(id)arg0 ;


@end


#endif