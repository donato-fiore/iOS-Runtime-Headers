// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEPATTERNSCHEMA_H
#define DEPATTERNSCHEMA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEPatternSchema : NSObject

@property shared_ptr<siri::dialogengine::PatternSchema> This; // ivar: _This
@property (readonly) NSString *description;
@property (readonly) NSString *name;


+(id)schema:(id)arg0 typeName:(id)arg1 ;
-(?)initWithPtr;
-(id)computedParameter:(id)arg0 ;
-(id)computedParameterNames;
-(id)init;
-(id)requiredParameter:(id)arg0 ;
-(id)requiredParameterNames;
-(id)setting:(id)arg0 ;
-(id)settingNames;


@end


#endif