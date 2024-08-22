// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKREMOVEASMCLASSOPERATION_H
#define CRKREMOVEASMCLASSOPERATION_H

@class CATOperation, NSString;
@protocol CRKClassKitRosterRequirements;



@interface CRKRemoveASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) NSString *objectID; // ivar: _objectID
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements


-(BOOL)isAsynchronous;
-(id)classWithObjectID:(id)arg0 inClasses:(id)arg1 ;
-(id)initWithObjectID:(id)arg0 requirements:(id)arg1 ;
-(void)didFetchClasses:(id)arg0 error:(id)arg1 ;
-(void)fetchClasses;
-(void)main;
-(void)removeClass:(id)arg0 ;


@end


#endif