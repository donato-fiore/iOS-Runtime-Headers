// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLRUNTIMEOBJECT_H
#define TMLRUNTIMEOBJECT_H


#import <Foundation/Foundation.h>


@interface TMLRuntimeObject : NSObject



-(BOOL)tmlHasPropertyForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)registerTMLProperty:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif