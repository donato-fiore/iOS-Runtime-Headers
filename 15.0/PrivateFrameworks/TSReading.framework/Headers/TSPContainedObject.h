// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPCONTAINEDOBJECT_H
#define TSPCONTAINEDOBJECT_H


#import <Foundation/Foundation.h>

#import "TSPObject.h"

@interface TSPContainedObject : NSObject

@property (weak, nonatomic) TSPObject *owner; // ivar: _owner


-(id)documentRoot;
-(id)initWithOwner:(id)arg0 ;
-(void)willModify;
-(void)willModifyForUpgrade;


@end


#endif