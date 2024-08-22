// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPCOORDINATORASSERTIONCONTEXT_H
#define SBPIPCOORDINATORASSERTIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBPIPCoordinatorAssertionContext : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason


-(id)initWithIdentifier:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif