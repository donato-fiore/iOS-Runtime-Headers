// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLNOTIFIERSERVICEADAPTER_H
#define CLNOTIFIERSERVICEADAPTER_H

@class CLIntersiloService, NSString;
@protocol CLNotifierServiceProtocol;



@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol>

 {
    map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>> _clients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CLNotifierBase notifier; // ivar: _notifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;


-(id)init;
-(int)notifierClientNumForCoparty:(id)arg0 ;
-(void)forget:(id)arg0 ;
-(void)register:(id)arg0 forNotification:(int)arg1 registrationInfo:(id)arg2 ;
-(void)setAdaptedNotifier:(struct CLNotifierBase *)arg0 ;
-(void)unregister:(id)arg0 forNotification:(int)arg1 ;


@end


#endif