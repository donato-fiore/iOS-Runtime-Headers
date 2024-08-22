// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPOLICYSESSIONFILEHANDLE_H
#define NEPOLICYSESSIONFILEHANDLE_H

@class NSString;


#import "NEFileHandle.h"

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name; // ivar: _name


-(NSUInteger)type;
-(id)description;
-(id)dictionary;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithPolicySession:(id)arg0 ;
-(id)initWithPolicySession:(id)arg0 name:(id)arg1 ;


@end


#endif