// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CKACKNOWLEDGMENTANIMATORMODELITEM_H
#define _CKACKNOWLEDGMENTANIMATORMODELITEM_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "CKEntity.h"

@interface _CKAcknowledgmentAnimatorModelItem : NSObject

@property (nonatomic) NSInteger ackVoteCount; // ivar: _ackVoteCount
@property (nonatomic) NSInteger acknowledgmentType; // ivar: _acknowledgmentType
@property (retain, nonatomic) CKEntity *entity; // ivar: _entity
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath




@end


#endif