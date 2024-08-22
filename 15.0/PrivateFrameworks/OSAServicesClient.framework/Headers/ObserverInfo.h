// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBSERVERINFO_H
#define OBSERVERINFO_H

@class NSArray;
@protocol OSADiagnosticObserver;

#import <Foundation/Foundation.h>


@interface ObserverInfo : NSObject

@property (retain) NSArray *bugTypes; // ivar: _bugTypes
@property (weak) NSObject<OSADiagnosticObserver> *observer; // ivar: _observer


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithObserver:(id)arg0 bugTypes:(id)arg1 ;


@end


#endif