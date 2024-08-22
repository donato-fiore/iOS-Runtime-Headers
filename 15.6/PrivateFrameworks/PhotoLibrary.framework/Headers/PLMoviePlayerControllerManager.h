// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMOVIEPLAYERCONTROLLERMANAGER_H
#define PLMOVIEPLAYERCONTROLLERMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLMoviePlayerControllerManager : NSObject {
    NSMutableArray *_playerStack;
}




+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)moveControllerToTopOfStack:(id)arg0 ;
-(void)removeControllerFromStack:(id)arg0 ;


@end


#endif