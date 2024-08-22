// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCANCELEROBSERVER_H
#define PFCANCELEROBSERVER_H

@protocol PFCancelerObserver;

#import <Foundation/Foundation.h>


@interface PFCancelerObserver : NSObject <PFCancelerObserver>

 {
    id *_block;
}




+(id)observerForCanceler:(id)arg0 block:(id)arg1 ;
-(id)init;
-(id)initWithCanceler:(id)arg0 block:(id)arg1 ;
-(void)cancelerWasCanceled:(id)arg0 ;


@end


#endif