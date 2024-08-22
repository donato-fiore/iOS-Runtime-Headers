// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef URTDEFAULTDESTINATIONPRESENTATION_H
#define URTDEFAULTDESTINATIONPRESENTATION_H

@class NSString;
@protocol URTDestinationPresenting, URTDestinationPresentationDelegate;


#import "URTUserNotificationPresentation.h"
#import "URTAlert.h"

@interface URTDefaultDestinationPresentation : URTUserNotificationPresentation <URTDestinationPresenting>

 {
    *__CFRunLoopSource _runLoopSource;
}


@property (readonly, nonatomic) URTAlert *alert; // ivar: _alert
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<URTDestinationPresentationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAlert:(id)arg0 forDestination:(NSInteger)arg1 ;
-(void)_invokeDelegateForResponseFlags:(NSUInteger)arg0 ;
-(void)invalidate;
-(void)present;


@end


#endif