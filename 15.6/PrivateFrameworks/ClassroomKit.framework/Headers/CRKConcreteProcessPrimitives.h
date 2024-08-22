// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCONCRETEPROCESSPRIMITIVES_H
#define CRKCONCRETEPROCESSPRIMITIVES_H

@protocol CRKProcessPrimitives;

#import <Foundation/Foundation.h>


@interface CRKConcreteProcessPrimitives : NSObject <CRKProcessPrimitives>





-(BOOL)processExistsWithIdentifier:(int)arg0 ;
-(id)subscribeToExitForProcessWithIdentifier:(int)arg0 exitHandler:(id)arg1 ;


@end


#endif