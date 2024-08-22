// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXQUERYOBSERVER_H
#define _EXQUERYOBSERVER_H

@class EXQueryController, NSString, NSArray;
@protocol _EXQueryControllerDelegate, _EXQueryObserverDelegate;



@interface _EXQueryObserver : EXQueryController <_EXQueryControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *extensions;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<_EXQueryObserverDelegate> *internalDelegate; // ivar: _internalDelegate
@property (readonly) Class superclass;


-(id)initWithQueries:(id)arg0 delegate:(id)arg1 ;
-(void)queryControllerDidUpdate:(id)arg0 difference:(id)arg1 ;


@end


#endif