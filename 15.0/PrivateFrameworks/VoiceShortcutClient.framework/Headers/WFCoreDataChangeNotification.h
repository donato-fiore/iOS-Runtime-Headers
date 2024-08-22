// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOREDATACHANGENOTIFICATION_H
#define WFCOREDATACHANGENOTIFICATION_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface WFCoreDataChangeNotification : NSObject

@property (readonly, nonatomic) NSSet *deleted; // ivar: _deleted
@property (readonly, nonatomic) NSSet *inserted; // ivar: _inserted
@property (readonly, nonatomic) BOOL invalidatedAllObjects; // ivar: _invalidatedAllObjects
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (readonly, nonatomic) NSSet *updated; // ivar: _updated


-(BOOL)appliesToObjectIDs:(id)arg0 ;
-(BOOL)appliesToObjectURIRepresentations:(id)arg0 ;
-(BOOL)appliesToResultState:(id)arg0 ;
-(BOOL)hasChanges;
-(BOOL)originatedInCurrentProcess;
-(id)debugDescription;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithInvalidatedAllObjects:(BOOL)arg0 updated:(id)arg1 inserted:(id)arg2 deleted:(id)arg3 processIdentifier:(int)arg4 ;
-(id)notificationByMergingChangesFromNotification:(id)arg0 ;


@end


#endif