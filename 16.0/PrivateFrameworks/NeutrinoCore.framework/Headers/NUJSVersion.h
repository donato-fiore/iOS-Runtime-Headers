// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUJSVERSION_H
#define NUJSVERSION_H



#import "NUJSObject.h"
#import "NUVersion.h"

@interface NUJSVersion : NUJSObject

@property (readonly, nonatomic) NUVersion *version;


-(BOOL)hasProperty:(id)arg0 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)initWithVersion:(id)arg0 context:(id)arg1 ;
-(id)toString;
-(id)valueForProperty:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif