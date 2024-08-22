// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFALWAYSONLIVERENDERINGASSERTION_H
#define SBFALWAYSONLIVERENDERINGASSERTION_H

@class NSDate, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBFAlwaysOnLiveRenderingAssertion : NSObject <BSInvalidatable>

 {
    id *_invalidationHandler;
}


@property (readonly, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL valid; // ivar: _valid


-(id)initWithReason:(id)arg0 invalidationHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif