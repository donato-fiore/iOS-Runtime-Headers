// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLOFFSETINTERMEDIATE_H
#define NSSQLOFFSETINTERMEDIATE_H



#import "NSSQLIntermediate.h"

@interface NSSQLOffsetIntermediate : NSSQLIntermediate {
    NSUInteger _offset;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithOffset:(NSUInteger)arg0 inScope:(id)arg1 ;


@end


#endif