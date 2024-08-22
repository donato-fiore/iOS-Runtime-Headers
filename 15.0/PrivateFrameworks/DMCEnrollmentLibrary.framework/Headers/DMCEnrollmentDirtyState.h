// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTDIRTYSTATE_H
#define DMCENROLLMENTDIRTYSTATE_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DMCEnrollmentDirtyState : NSObject

@property (readonly, nonatomic) NSArray *dirtyAltDISDs;
@property (readonly, nonatomic) NSArray *dirtyPersonaIDs;
@property (readonly, nonatomic) NSArray *dirtyProfileIdentifiers;
@property (readonly, nonatomic) NSArray *dirtyRMAccounts;
@property (retain, nonatomic) NSMutableDictionary *stateDictionary; // ivar: _stateDictionary


-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;
-(void)_addValue:(id)arg0 toArrayForKey:(id)arg1 ;
-(void)_removeValue:(id)arg0 fromArrayForKey:(id)arg1 ;
-(void)addDirtyAltDSID:(id)arg0 ;
-(void)addDirtyPersonaID:(id)arg0 ;
-(void)addDirtyProfileIdentifier:(id)arg0 ;
-(void)addDirtyRMAccount:(id)arg0 ;
-(void)removeDirtyAltDSID:(id)arg0 ;
-(void)removeDirtyPersonaID:(id)arg0 ;
-(void)removeDirtyProfileIdentifier:(id)arg0 ;
-(void)removeDirtyRMAccount:(id)arg0 ;


@end


#endif