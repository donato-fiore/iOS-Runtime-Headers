// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLFETCHDICTIONARYCOUNTINTERMEDIATE_H
#define NSSQLFETCHDICTIONARYCOUNTINTERMEDIATE_H



#import "NSSQLStatementIntermediate.h"
#import "NSSQLFetchIntermediate.h"

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {
    NSSQLFetchIntermediate *_realFetch;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithFetchIntermediate:(id)arg0 inScope:(id)arg1 ;
-(void)dealloc;


@end


#endif