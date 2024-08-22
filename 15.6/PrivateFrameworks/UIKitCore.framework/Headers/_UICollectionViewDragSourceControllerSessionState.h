// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWDRAGSOURCECONTROLLERSESSIONSTATE_H
#define _UICOLLECTIONVIEWDRAGSOURCECONTROLLERSESSIONSTATE_H

@protocol UIDragSession;

#import <Foundation/Foundation.h>


@interface _UICollectionViewDragSourceControllerSessionState : NSObject

@property (retain, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (readonly, nonatomic) BOOL isActive;


-(id)description;


@end


#endif