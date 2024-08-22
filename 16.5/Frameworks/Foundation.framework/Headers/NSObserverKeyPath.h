// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSOBSERVERKEYPATH_H
#define NSOBSERVERKEYPATH_H

@protocol NSOwningObserver, NSObserver;


#import "NSBoundKeyPath.h"
#import "NSString.h"

@interface NSObserverKeyPath : NSBoundKeyPath <NSOwningObserver, NSObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_receiveBox:(id)arg0 ;
-(void)finishObserving;
-(void)setObservation:(id)arg0 ;


@end


#endif