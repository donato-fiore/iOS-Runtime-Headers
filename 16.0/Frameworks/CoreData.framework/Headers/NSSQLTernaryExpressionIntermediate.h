// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLTERNARYEXPRESSIONINTERMEDIATE_H
#define NSSQLTERNARYEXPRESSIONINTERMEDIATE_H

@class NSArray;


#import "NSSQLExpressionIntermediate.h"
#import "NSSQLEntity.h"

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}




-(BOOL)disambiguationKeypathHasToMany;
-(id)disambiguatingEntity;
-(id)disambiguationKeypath;
-(id)generateSQLStringInContext:(id)arg0 ;
-(void)dealloc;
-(void)setDisambiguatingEntity:(id)arg0 withKeypath:(id)arg1 hasToMany:(BOOL)arg2 ;


@end


#endif