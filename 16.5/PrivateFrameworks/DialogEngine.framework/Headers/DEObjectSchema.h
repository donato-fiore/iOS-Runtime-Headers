// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEOBJECTSCHEMA_H
#define DEOBJECTSCHEMA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEObjectSchema : NSObject

@property shared_ptr<siri::dialogengine::ObjectSchema> This; // ivar: _This
@property (readonly) NSString *baseObject;
@property (readonly) NSString *description;
@property (readonly) NSString *name;


+(id)schema:(id)arg0 typeName:(id)arg1 ;
-(?)initWithPtr;
-(id)init;
-(id)input:(id)arg0 name:(id)arg1 ;
-(id)inputNames:(id)arg0 ;
-(id)property:(id)arg0 name:(id)arg1 ;
-(id)propertyNames:(id)arg0 ;


@end


#endif