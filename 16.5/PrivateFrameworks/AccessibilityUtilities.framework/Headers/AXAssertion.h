// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXASSERTION_H
#define AXASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXAssertion : NSObject

@property (retain, nonatomic) NSString *assertionType; // ivar: _assertionType
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


+(id)assertionWithType:(id)arg0 identifier:(id)arg1 ;
+(void)ensureAssertionsHaveBeenProcessedWithCompletion:(id)arg0 ;
-(BOOL)_hasValidAssertionType;
-(id)description;
-(id)initWithType:(id)arg0 identifier:(id)arg1 ;
-(void)_notifyServerAssertionWasAcquired;
-(void)_notifyServerAssertionWasRelinquished;
-(void)dealloc;


@end


#endif