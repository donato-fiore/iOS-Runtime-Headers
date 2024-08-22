// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLLIMITINTERMEDIATE_H
#define NSSQLLIMITINTERMEDIATE_H



#import "NSSQLIntermediate.h"

@interface NSSQLLimitIntermediate : NSSQLIntermediate {
    NSUInteger _limit;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithLimit:(NSUInteger)arg0 inScope:(id)arg1 ;


@end


#endif