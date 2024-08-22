// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSQLITEQUERYPLAN_H
#define PLSQLITEQUERYPLAN_H

@class NSMutableArray, NSRegularExpression, NSString;

#import <Foundation/Foundation.h>


@interface PLSqliteQueryPlan : NSObject {
    NSMutableArray *_nodes;
    NSRegularExpression *_stringRepresentationRegex;
}


@property (readonly, copy) NSString *graphDescription;
@property (readonly, copy) NSString *listDescription;


-(id)_stringRepresentationRegex;
-(id)init;
-(void)_renderLevelWithParentIdentifier:(int)arg0 prefix:(id)arg1 intoLines:(id)arg2 ;
-(void)addNodeWithIdentifier:(int)arg0 parentIdentifier:(int)arg1 unused:(int)arg2 nodeDescription:(id)arg3 ;
-(void)addNodeWithStringRepresentation:(id)arg0 ;


@end


#endif