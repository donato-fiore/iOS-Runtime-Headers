// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIACTIVITYASSERTION_H
#define SIRIACTIVITYASSERTION_H

@class NSString;
@protocol SiriAssertion;

#import <Foundation/Foundation.h>


@interface SiriActivityAssertion : NSObject <SiriAssertion>

 {
    id *_invalidationBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) NSString *reference; // ivar: _reference
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithIdentifier:(id)arg0 reference:(id)arg1 reason:(id)arg2 timestamp:(CGFloat)arg3 invalidationBlock:(id)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidatedAtTimestamp:(CGFloat)arg0 ;


@end


#endif