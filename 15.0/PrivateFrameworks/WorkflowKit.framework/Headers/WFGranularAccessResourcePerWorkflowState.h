// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGRANULARACCESSRESOURCEPERWORKFLOWSTATE_H
#define WFGRANULARACCESSRESOURCEPERWORKFLOWSTATE_H

@class NSString, NSSet, NSMapTable;
@protocol WFAccessResourcePerWorkflowState;

#import <Foundation/Foundation.h>


@interface WFGranularAccessResourcePerWorkflowState : NSObject <WFAccessResourcePerWorkflowState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *entries; // ivar: _entries
@property (retain, nonatomic) NSMapTable *entriesMapTable; // ivar: _entriesMapTable
@property (readonly, nonatomic) BOOL hasDeniedEntries;
@property (readonly, nonatomic) BOOL hasUndeterminedEntries;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)entryTypeClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntries:(id)arg0 ;
-(id)stateByPerformingUnionWithState:(id)arg0 ;
-(id)stateByPopulatingNotDeterminedEntriesUsingState:(id)arg0 ;
-(id)stateBySettingAllEntriesAsAuthorized:(BOOL)arg0 ;
-(id)stateBySettingUndeterminedEntriesToAuthorized:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif