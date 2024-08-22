// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCIAP2SHIMSERVERDELEGATEINFO_H
#define ACCIAP2SHIMSERVERDELEGATEINFO_H

@protocol ACCiAP2ShimServerDelegate;

#import <Foundation/Foundation.h>


@interface ACCiAP2ShimServerDelegateInfo : NSObject

@property (readonly) NSObject<ACCiAP2ShimServerDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif