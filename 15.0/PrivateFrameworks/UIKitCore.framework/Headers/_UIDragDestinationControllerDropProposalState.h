// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRAGDESTINATIONCONTROLLERDROPPROPOSALSTATE_H
#define _UIDRAGDESTINATIONCONTROLLERDROPPROPOSALSTATE_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "UICollectionViewDropProposal.h"

@interface _UIDragDestinationControllerDropProposalState : NSObject

@property (nonatomic) BOOL didDrop; // ivar: _didDrop
@property (readonly, nonatomic) NSIndexPath *effectiveIndexPath;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (retain, nonatomic) UICollectionViewDropProposal *proposal; // ivar: _proposal


-(BOOL)_hasDropActionTarget;
-(id)description;
-(id)init;
-(void)didPerformDrop;
-(void)updateFromDropProposal:(id)arg0 ;


@end


#endif