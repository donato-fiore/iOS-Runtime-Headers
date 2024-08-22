// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JTSUSPENDEDINTERACTIONREQUEST_H
#define JTSUSPENDEDINTERACTIONREQUEST_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface JTSuspendedInteractionRequest : NSObject

@property (retain, nonatomic) NSArray *excludedChildViewControllers; // ivar: _excludedChildViewControllers
@property (retain, nonatomic) NSString *tag; // ivar: _tag


+(id)requestWithTag:(id)arg0 excludedViewControllers:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif