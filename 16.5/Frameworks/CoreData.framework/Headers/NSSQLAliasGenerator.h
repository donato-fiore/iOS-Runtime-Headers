// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLALIASGENERATOR_H
#define NSSQLALIASGENERATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSSQLAliasGenerator : NSObject {
    unsigned int _nextTableAlias;
    unsigned int _nextVariableAlias;
    unsigned int _nextTempTableAlias;
    NSString *_tableBase;
    NSString *_variableBase;
}




-(id)generateSubqueryVariableAlias;
-(id)generateTableAlias;
-(id)init;
-(id)initWithNestingLevel:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif