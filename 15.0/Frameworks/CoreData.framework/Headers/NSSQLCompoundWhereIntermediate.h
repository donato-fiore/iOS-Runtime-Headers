// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLCOMPOUNDWHEREINTERMEDIATE_H
#define NSSQLCOMPOUNDWHEREINTERMEDIATE_H

@class NSMutableArray, NSArray;


#import "NSSQLWhereIntermediate.h"
#import "NSSQLEntity.h"

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}




-(BOOL)disambiguationKeypathHasToMany;
-(BOOL)isOrScoped;
-(id)disambiguatingEntity;
-(id)disambiguationKeypath;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 inScope:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(void)setDisambiguatingEntity:(id)arg0 withKeypath:(id)arg1 hasToMany:(BOOL)arg2 ;


@end


#endif