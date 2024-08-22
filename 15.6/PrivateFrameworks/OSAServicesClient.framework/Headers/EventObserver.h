// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EVENTOBSERVER_H
#define EVENTOBSERVER_H

@class NSSet;
@protocol OSADiagnosticEventObserver;

#import <Foundation/Foundation.h>


@interface EventObserver : NSObject

@property (readonly, nonatomic) NSSet *bugTypes; // ivar: _bugTypes
@property (readonly, weak, nonatomic) NSObject<OSADiagnosticEventObserver> *observer; // ivar: _observer


-(BOOL)matches:(id)arg0 ;
-(id)initWithObserver:(id)arg0 bugTypes:(id)arg1 ;
-(void)deliverEvent:(id)arg0 on:(id)arg1 ;


@end


#endif