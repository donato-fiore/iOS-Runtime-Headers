// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBSERVERSHIM_H
#define OBSERVERSHIM_H

@class NSString;
@protocol OSADiagnosticEventObserver, OSADiagnosticWriteObserver, OSADiagnosticObserver;

#import <Foundation/Foundation.h>


@interface ObserverShim : NSObject <OSADiagnosticEventObserver, OSADiagnosticWriteObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<OSADiagnosticObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(BOOL)matches:(id)arg0 ;
-(id)initWithObserver:(id)arg0 ;
-(void)didReceiveDiagnosticLog:(id)arg0 ofType:(id)arg1 details:(id)arg2 ;
-(void)didWriteDiagnosticLog:(id)arg0 ofType:(id)arg1 toPath:(id)arg2 ;
-(void)failedToWriteDiagnosticLog:(id)arg0 ofType:(id)arg1 error:(id)arg2 ;
-(void)willWriteDiagnosticLog:(id)arg0 ofType:(id)arg1 ;


@end


#endif