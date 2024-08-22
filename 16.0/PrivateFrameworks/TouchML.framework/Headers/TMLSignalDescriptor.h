// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLSIGNALDESCRIPTOR_H
#define TMLSIGNALDESCRIPTOR_H

@class NSString;


#import "TMLMethodDescriptor.h"

@interface TMLSignalDescriptor : TMLMethodDescriptor

@property (readonly, nonatomic) NSString *signalName;


-(id)initWithName:(id)arg0 parameters:(id)arg1 ;
-(id)initWithName:(id)arg0 returnType:(NSUInteger)arg1 parameters:(id)arg2 methodSelector:(id)arg3 attributes:(id)arg4 ;


@end


#endif