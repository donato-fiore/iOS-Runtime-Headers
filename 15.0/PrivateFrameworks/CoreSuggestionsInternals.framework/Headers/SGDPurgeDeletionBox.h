// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDPURGEDELETIONBOX_H
#define SGDPURGEDELETIONBOX_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SGDPurgeDeletionBox : NSObject

@property (retain, nonatomic) NSMutableDictionary *deleteDomainIds; // ivar: _deleteDomainIds
@property (retain, nonatomic) NSMutableDictionary *deleteUniqueIds; // ivar: _deleteUniqueIds
@property (retain, nonatomic) NSMutableDictionary *purgeUniqueIds; // ivar: _purgeUniqueIds


-(BOOL)shouldRunHandlerImmediately;
-(id)init;
-(void)addDeletion:(id)arg0 domainSelection:(id)arg1 ;
-(void)addDeletion:(id)arg0 uniqueIds:(id)arg1 ;
-(void)addPurge:(id)arg0 uniqueIds:(id)arg1 ;


@end


#endif