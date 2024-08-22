// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDEFAULTCOMPONENTSTATE_H
#define SXDEFAULTCOMPONENTSTATE_H

@class NSString;
@protocol SXComponentState;

#import <Foundation/Foundation.h>


@interface SXDefaultComponentState : NSObject <SXComponentState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)init;


@end


#endif