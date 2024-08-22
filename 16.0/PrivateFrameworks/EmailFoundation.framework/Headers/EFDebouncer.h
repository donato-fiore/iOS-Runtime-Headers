// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFDEBOUNCER_H
#define EFDEBOUNCER_H

@class NSString, EFObservable<EFObserver>;
@protocol EFCancelable;

#import <Foundation/Foundation.h>


@interface EFDebouncer : NSObject <EFCancelable>



@property (readonly, nonatomic) NSObject<EFCancelable> *cancelable; // ivar: _cancelable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EFObservable<EFObserver> *observable; // ivar: _observable
@property (readonly) Class superclass;


+(id)log;
-(id)initWithTimeInterval:(CGFloat)arg0 scheduler:(id)arg1 startAfter:(NSUInteger)arg2 block:(id)arg3 ;
-(void)cancel;
-(void)debounceResult:(id)arg0 ;


@end


#endif