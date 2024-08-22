// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASESTATEMENTRENDERER_H
#define ML3DATABASESTATEMENTRENDERER_H


#import <Foundation/Foundation.h>


@interface ML3DatabaseStatementRenderer : NSObject



+(id)defaultRenderer;
-(id)beginTransactionStatementWithBehaviorType:(NSUInteger)arg0 ;
-(id)commitTransactionStatement;
-(id)insertStatementForTableName:(id)arg0 columnNames:(id)arg1 ;
-(id)insertStatementUsingDefaultValuesForTableName:(id)arg0 ;
-(id)insertStatementWithOptions:(id)arg0 ;
-(id)rollbackTranscationStatement;
-(id)rollbackTranscationStatementToSavepointName:(id)arg0 ;
-(id)savepointReleaseStatementWithName:(id)arg0 ;
-(id)savepointStatementWithName:(id)arg0 ;
-(id)statementWithPrefix:(id)arg0 inParameterCount:(NSUInteger)arg1 ;


@end


#endif