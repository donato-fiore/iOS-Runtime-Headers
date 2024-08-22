// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEORULECOLLECTIONSMOMENTS_H
#define VCVIDEORULECOLLECTIONSMOMENTS_H


#import <Foundation/Foundation.h>


@interface VCVideoRuleCollectionsMoments : NSObject {
    BOOL _isHEIFAndHEVCFormatEnabled;
}




+(id)sharedInstance;
-(id)getMomentsImageTypes;
-(id)getMomentsVideoCodecs;
-(id)init;
-(unsigned char)getMomentsCapabilities;


@end


#endif