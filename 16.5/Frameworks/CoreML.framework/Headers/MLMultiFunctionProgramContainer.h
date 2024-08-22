// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMULTIFUNCTIONPROGRAMCONTAINER_H
#define MLMULTIFUNCTIONPROGRAMCONTAINER_H

@class NSString, NSDictionary;


#import "MLProgramContainer.h"

@interface MLMultiFunctionProgramContainer : MLProgramContainer {
    map<std::string, InputNameToShapes, std::less<std::string>, std::allocator<std::pair<const std::string, InputNameToShapes>>> functionNameToInputShapes;
    NSString *_activeFunction;
}


@property (retain, nonatomic) NSString *activeFunction;
@property (retain, nonatomic) NSDictionary *functionNameToInputLayersNames; // ivar: _functionNameToInputLayersNames
@property (retain, nonatomic) NSDictionary *functionNameToOutputLayersNames; // ivar: _functionNameToOutputLayersNames


+(id)containerFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(id)initWithContainer:(id)arg0 program:(*void)arg1 error:(*id)arg2 ;


@end


#endif