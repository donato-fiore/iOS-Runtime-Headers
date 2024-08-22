// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONFIGSERVERHANDLER_H
#define PPCONFIGSERVERHANDLER_H

@protocol PPConfigServerProtocol;

#import <Foundation/Foundation.h>


@interface PPConfigServerHandler : NSObject <PPConfigServerProtocol>





-(void)assetVersionWithCompletion:(id)arg0 ;
-(void)readableTrialTreatmentsMappingWithCompletion:(id)arg0 ;
-(void)variantNameWithCompletion:(id)arg0 ;


@end


#endif