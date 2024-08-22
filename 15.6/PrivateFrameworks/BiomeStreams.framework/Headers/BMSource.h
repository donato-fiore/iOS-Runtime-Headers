// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSOURCE_H
#define BMSOURCE_H

@class NSString;
@protocol BMSourceProtocol;

#import <Foundation/Foundation.h>


@interface BMSource : NSObject <BMSourceProtocol>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)logMetrics;
-(void)sendEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 timestamp:(CGFloat)arg1 ;


@end


#endif