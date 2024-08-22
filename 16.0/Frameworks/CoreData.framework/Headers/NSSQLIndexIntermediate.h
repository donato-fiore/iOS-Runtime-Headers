// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLINDEXINTERMEDIATE_H
#define NSSQLINDEXINTERMEDIATE_H



#import "NSSQLIntermediate.h"
#import "NSSQLBinaryIndex.h"

@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex *_index;
    BOOL _isHandlingExpressions;
}




-(BOOL)isIndexExpressionScoped;
-(BOOL)isIndexScoped;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)governingEntity;
-(id)initForIndex:(id)arg0 withScope:(id)arg1 ;
-(void)dealloc;


@end


#endif