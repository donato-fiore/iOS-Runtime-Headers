// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTSETTINGSGATEWAY_H
#define BLTSETTINGSGATEWAY_H

@class BBSettingsGateway, NSLock;

#import <Foundation/Foundation.h>


@interface BLTSettingsGateway : NSObject {
    BBSettingsGateway *_actualSettingsGateway;
    NSLock *_actualSettingsGatewayLock;
    int _token;
}




+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)surrogateWithQueue:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif