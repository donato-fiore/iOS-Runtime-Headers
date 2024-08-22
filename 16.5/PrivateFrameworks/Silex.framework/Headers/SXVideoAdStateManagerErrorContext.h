// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIDEOADSTATEMANAGERERRORCONTEXT_H
#define SXVIDEOADSTATEMANAGERERRORCONTEXT_H

@class NSString, NSError;
@protocol NFStateMachineContextType;

#import <Foundation/Foundation.h>


@interface SXVideoAdStateManagerErrorContext : NSObject <NFStateMachineContextType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithError:(id)arg0 ;


@end


#endif