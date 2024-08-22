// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWQUERY_H
#define WFWORKFLOWQUERY_H

@class NSString;
@protocol NSSecureCoding;


#import "WFResultQuery.h"

@interface WFWorkflowQuery : WFResultQuery <NSSecureCoding>



@property (readonly, nonatomic) NSString *folderIdentifier; // ivar: _folderIdentifier
@property (nonatomic) BOOL includeTombstonesAndConflicts; // ivar: _includeTombstonesAndConflicts
@property (readonly, nonatomic) NSUInteger location; // ivar: _location
@property (nonatomic) NSInteger resultsLimit; // ivar: _resultsLimit
@property (readonly, nonatomic) NSString *workflowType; // ivar: _workflowType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionIdentifier:(id)arg0 ;
-(id)initWithFolderIdentifier:(id)arg0 ;
-(id)initWithLocation:(NSUInteger)arg0 ;
-(id)initWithWorkflowType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif