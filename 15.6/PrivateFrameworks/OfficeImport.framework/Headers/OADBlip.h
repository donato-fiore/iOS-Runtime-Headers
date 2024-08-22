// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADBLIP_H
#define OADBLIP_H


#import <Foundation/Foundation.h>

#import "OADSubBlip.h"

@interface OADBlip : NSObject {
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}




+(id)pathExtensionForBlipType:(int)arg0 ;
-(*unsigned int)referenceCount;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)altSubBlip;
-(id)mainSubBlip;
-(void)setAltSubBlip:(id)arg0 ;
-(void)setMainSubBlip:(id)arg0 ;


@end


#endif