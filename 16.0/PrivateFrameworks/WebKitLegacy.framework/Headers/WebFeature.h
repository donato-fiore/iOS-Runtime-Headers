// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBFEATURE_H
#define WEBFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WebFeature : NSObject

@property (readonly, nonatomic) BOOL defaultValue; // ivar: _defaultValue
@property (readonly, copy, nonatomic) NSString *details; // ivar: _details
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *preferenceKey; // ivar: _preferenceKey


-(id)description;
-(id)initWithKey:(id)arg0 preferenceKey:(id)arg1 name:(id)arg2 details:(id)arg3 defaultValue:(BOOL)arg4 hidden:(BOOL)arg5 ;
-(void)dealloc;


@end


#endif