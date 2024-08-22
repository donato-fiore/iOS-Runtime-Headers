// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSIDENTIFIER_H
#define NUJSIDENTIFIER_H



#import "NUJSObject.h"
#import "NUIdentifier.h"

@interface NUJSIdentifier : NUJSObject

@property (readonly, nonatomic) NUIdentifier *identifier;


-(BOOL)hasProperty:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)toString;
-(id)valueForProperty:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif