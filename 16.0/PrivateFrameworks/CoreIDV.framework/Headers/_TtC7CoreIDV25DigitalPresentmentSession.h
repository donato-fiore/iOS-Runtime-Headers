// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7COREIDV25DIGITALPRESENTMENTSESSION_H
#define _TTC7COREIDV25DIGITALPRESENTMENTSESSION_H


#import <Foundation/Foundation.h>


@interface _TtC7CoreIDV25DigitalPresentmentSession : NSObject {
    ? client;
}




-(id)init;
-(void)cancelRequest;
-(void)checkCanRequestDocument:(id)arg0 completion:(id)arg1 ;
-(void)requestDocument:(id)arg0 completion:(id)arg1 ;


@end


#endif