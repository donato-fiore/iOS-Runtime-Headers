// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDIFFABLEDATASOURCESECTIONCONTROLLERHANDLERS_H
#define _UIDIFFABLEDATASOURCESECTIONCONTROLLERHANDLERS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIDiffableDataSourceSectionControllerHandlers : NSObject <NSCopying>



@property (copy, nonatomic) id *childSnapshotForExpandingParentHandler; // ivar: _childSnapshotForExpandingParentHandler
@property (copy, nonatomic) id *shouldCollapseItemHandler; // ivar: _shouldCollapseItemHandler
@property (copy, nonatomic) id *shouldExpandItemHandler; // ivar: _shouldExpandItemHandler
@property (copy, nonatomic) id *willCollapseItemHandler; // ivar: _willCollapseItemHandler
@property (copy, nonatomic) id *willExpandItemHandler; // ivar: _willExpandItemHandler


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif