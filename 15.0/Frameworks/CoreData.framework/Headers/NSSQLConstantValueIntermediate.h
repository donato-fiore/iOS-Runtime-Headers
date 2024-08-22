// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLCONSTANTVALUEINTERMEDIATE_H
#define NSSQLCONSTANTVALUEINTERMEDIATE_H



#import "NSSQLIntermediate.h"

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
    unsigned char _type;
    id *_constantValue;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithConstantValue:(id)arg0 inScope:(id)arg1 context:(id)arg2 ;
-(id)initWithConstantValue:(id)arg0 ofType:(unsigned char)arg1 inScope:(id)arg2 context:(id)arg3 ;
-(void)dealloc;


@end


#endif