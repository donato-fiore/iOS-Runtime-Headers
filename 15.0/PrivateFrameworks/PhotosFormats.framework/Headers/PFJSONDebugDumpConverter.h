// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFJSONDEBUGDUMPCONVERTER_H
#define PFJSONDEBUGDUMPCONVERTER_H


#import <Foundation/Foundation.h>


@interface PFJSONDebugDumpConverter : NSObject

@property (copy) id *unknownTypeHandler; // ivar: _unknownTypeHandler


-(id)JSONCompatibleObjectForObject:(id)arg0 ;
-(id)JSONForObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithUnknownTypeHandler:(id)arg0 ;
-(id)unknownObjectTypePlaceholderForObject:(id)arg0 ;


@end


#endif