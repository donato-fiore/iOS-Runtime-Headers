// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHADERASSIGNMENT_H
#define TSCH3DSHADERASSIGNMENT_H

@class NSString, NSArray;
@protocol TSCH3DShaderStatement;

#import <Foundation/Foundation.h>

#import "TSCH3DShaderProgram.h"
#import "TSCH3DShaderVariableLinkage.h"

@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement>

 {
    NSString *_statement;
    TSCH3DShaderProgram *_program;
    vector<TSCH3DShaderVariableScopeType, std::allocator<TSCH3DShaderVariableScopeType>> _dependeeScopes;
}


@property (readonly, nonatomic) TSCH3DShaderVariableLinkage *assignee; // ivar: _assignee
@property (readonly, nonatomic) TSCH3DShaderVariableScopeType assigneeScope; // ivar: _assigneeScope
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependees; // ivar: _dependees
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLinked;
@property (nonatomic) TSCH3DShaderType linkageType; // ivar: _linkageType
@property (readonly, nonatomic) NSString *string;
@property (readonly) Class superclass;


+(id)assignmentWithAssignee:(id)arg0 statement:(id)arg1 dependees:(id)arg2 program:(id)arg3 ;
-(*void)dependeeScopes;
-(BOOL)isMetal;
-(BOOL)updateLinkageTypeAddVaryingToAdditions:(id)arg0 ;
-(id)expressionStringForType:(struct TSCH3DShaderType )arg0 ;
-(id)forceLinkageForType:(struct TSCH3DShaderType )arg0 ;
-(id)initWithAssigneeLinkage:(id)arg0 statement:(id)arg1 dependees:(id)arg2 program:(id)arg3 ;
-(id)resolve;
-(id)resolveDependeesWithPreviousType:(struct TSCH3DShaderType )arg0 ;
-(id)updateDependeesWithPreviousType:(struct TSCH3DShaderType )arg0 ;
-(id)updateVaryingAssignmentForLinkage:(id)arg0 ;
-(id)variableDeclaration;
-(id)varyingAssignmentForLinkage:(id)arg0 ;
-(struct TSCH3DShaderType )dominantDependeeLinkageType;
-(void)setGeneratedForType:(struct TSCH3DShaderType )arg0 ;


@end


#endif