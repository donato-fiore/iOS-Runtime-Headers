// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDISTRIBUTEDTIMESTAMPSTATEVECTOR_H
#define CKDISTRIBUTEDTIMESTAMPSTATEVECTOR_H



#import "CKDistributedTimestampClockVector.h"

@interface CKDistributedTimestampStateVector : CKDistributedTimestampClockVector



-(BOOL)containsTimestampsWithAtomState:(unsigned char)arg0 ;
-(BOOL)hasAtomStateNotInStateVector:(id)arg0 ;
-(id)clockVector;
-(id)descriptionWithStringSiteIdentifiers:(BOOL)arg0 usingSuperscripts:(BOOL)arg1 ;
-(id)initWithClockValuesInIndexSet:(id)arg0 withAtomState:(unsigned char)arg1 forSiteIdentifier:(id)arg2 ;
-(id)vectorFilteredByAtomState:(unsigned char)arg0 ;
-(unsigned char)atomStateForTimestamp:(id)arg0 ;
-(unsigned char)vectorExpansionState;
-(void)addClockValuesInIndexSet:(id)arg0 withAtomState:(unsigned char)arg1 forSiteIdentifier:(id)arg2 ;
-(void)addClockValuesInIndexSet:(id)arg0 withClockType:(unsigned char)arg1 atomState:(unsigned char)arg2 forSiteIdentifier:(id)arg3 ;
-(void)addClockValuesInIndexSet:(id)arg0 withClockType:(unsigned char)arg1 forSiteIdentifier:(id)arg2 ;
-(void)enumerateAllClockValuesUsingBlock:(id)arg0 ;
-(void)enumerateClockValuesForSiteIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)intersectStateVector:(id)arg0 ;
-(void)minusStateVector:(id)arg0 ;
-(void)unionStateVector:(id)arg0 ;
-(void)unionVector:(id)arg0 ;


@end


#endif