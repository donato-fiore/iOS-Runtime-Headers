// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCKEYBOARDEVENTIMPL_H
#define _GCKEYBOARDEVENTIMPL_H

@class NSString;
@protocol _GCKeyboardEvent;

#import <Foundation/Foundation.h>


@interface _GCKeyboardEventImpl : NSObject <_GCKeyboardEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger down; // ivar: down
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp; // ivar: timestamp
@property (nonatomic) NSInteger usage; // ivar: usage
@property (nonatomic) NSInteger usagePage; // ivar: usagePage


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKeyboardEvent:(id)arg0 ;


@end


#endif