// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASEFUNCTIONPOINTER_H
#define ML3DATABASEFUNCTIONPOINTER_H



#import "ML3DatabaseFunction.h"

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction

@property (nonatomic) *unk functionPointer; // ivar: _functionPointer
@property (nonatomic) *void userData; // ivar: _userData


-(BOOL)registerWithConnection:(id)arg0 ;


@end


#endif