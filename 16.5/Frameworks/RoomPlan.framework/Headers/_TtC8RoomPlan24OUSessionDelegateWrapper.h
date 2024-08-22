// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8ROOMPLAN24OUSESSIONDELEGATEWRAPPER_H
#define _TTC8ROOMPLAN24OUSESSIONDELEGATEWRAPPER_H

@protocol OUSessionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8RoomPlan24OUSessionDelegateWrapper : NSObject <OUSessionDelegate>

 {
    ? captureSession;
}




-(id)init;
-(void)session:(id)arg0 didFailWithError:(NSInteger)arg1 ;
-(void)session:(id)arg0 didUpdateDetectedObjects:(id)arg1 ;


@end


#endif