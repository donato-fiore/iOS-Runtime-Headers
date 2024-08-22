// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSOBSERVABLEKEYPATH_H
#define NSOBSERVABLEKEYPATH_H

@protocol NSObservable;


#import "NSBoundKeyPath.h"
#import "NSString.h"

@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>



@property (readonly) NSObject<NSObservable> *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_wantsChanges;
-(id)addObserver:(id)arg0 ;
-(void)removeObservation:(id)arg0 ;


@end


#endif