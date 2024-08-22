// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSIGNATUREPROVIDER_H
#define ATSIGNATUREPROVIDER_H


#import <Foundation/Foundation.h>


@interface ATSignatureProvider : NSObject



-(id)createSignature:(*id)arg0 forData:(id)arg1 ;
-(id)verifySignature:(id)arg0 forData:(id)arg1 ;


@end


#endif