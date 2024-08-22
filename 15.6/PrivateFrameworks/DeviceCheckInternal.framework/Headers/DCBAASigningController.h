// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCBAASIGNINGCONTROLLER_H
#define DCBAASIGNINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface DCBAASigningController : NSObject



-(BOOL)supportsUCRTAttesation;
-(void)baaSignatureForData:(id)arg0 completion:(id)arg1 ;
-(void)baaSignaturesForData:(id)arg0 completion:(id)arg1 ;


@end


#endif