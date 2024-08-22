// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCRYPTOINFO_H
#define VCCRYPTOINFO_H


#import <Foundation/Foundation.h>


@interface VCCryptoInfo : NSObject {
    tagSRTPINFO _SRTPInfo;
}


@property (readonly) *tagSRTPINFO state;


-(id)initWithSRTPInfo:(struct tagSRTPINFO *)arg0 ;
-(void)dealloc;


@end


#endif