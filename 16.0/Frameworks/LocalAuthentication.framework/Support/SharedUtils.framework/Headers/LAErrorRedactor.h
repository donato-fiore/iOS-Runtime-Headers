// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAERRORREDACTOR_H
#define LAERRORREDACTOR_H

@class NSString;
@protocol LAErrorRedacting;

#import <Foundation/Foundation.h>


@interface LAErrorRedactor : NSObject <LAErrorRedacting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactError:(id)arg0 ;


@end


#endif