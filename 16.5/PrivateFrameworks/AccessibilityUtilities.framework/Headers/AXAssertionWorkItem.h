// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXASSERTIONWORKITEM_H
#define AXASSERTIONWORKITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXAssertionWorkItem : NSObject

@property (readonly, nonatomic) BOOL acquire; // ivar: _acquire
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger retries; // ivar: _retries
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)initWithType:(id)arg0 identifier:(id)arg1 isAcquisition:(BOOL)arg2 ;


@end


#endif