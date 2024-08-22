// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGDESTINATIONCONTROLLERSESSIONSTATE_H
#define _UIDRAGDESTINATIONCONTROLLERSESSIONSTATE_H

@protocol UIDropSession;

#import <Foundation/Foundation.h>


@interface _UIDragDestinationControllerSessionState : NSObject

@property (retain, nonatomic) NSObject<UIDropSession> *dropSession; // ivar: _dropSession
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDragging;
@property (readonly, nonatomic) BOOL isReordering;
@property (nonatomic) int state; // ivar: _state


-(id)description;


@end


#endif