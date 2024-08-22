// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISICONOBSERVER_H
#define ISICONOBSERVER_H

@protocol ISIconManagerObserver, ISIconObserverDelegate;

#import <Foundation/Foundation.h>


@interface ISIconObserver : NSObject <ISIconManagerObserver>



@property (readonly, weak) NSObject<ISIconObserverDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)iconManager:(id)arg0 didInvalidateIcons:(id)arg1 ;


@end


#endif