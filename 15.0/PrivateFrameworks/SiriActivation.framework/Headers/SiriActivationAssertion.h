// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIACTIVATIONASSERTION_H
#define SIRIACTIVATIONASSERTION_H



#import "SiriActivationSource.h"

@interface SiriActivationAssertion : SiriActivationSource

@property (nonatomic) NSUInteger reason; // ivar: _reason


-(id)connection;
-(id)initWithIdentifier:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)_setConnection:(id)arg0 ;
-(void)configureConnection;
-(void)dealloc;
-(void)invalidate;
-(void)invalidatedAtTimestamp:(CGFloat)arg0 ;


@end


#endif