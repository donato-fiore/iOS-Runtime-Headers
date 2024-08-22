// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDANIMATIONINFO_H
#define PDANIMATIONINFO_H


#import <Foundation/Foundation.h>

#import "PDAnimationInfoData.h"
#import "PDMediaNode.h"

@interface PDAnimationInfo : NSObject {
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
}


@property (retain, nonatomic) PDAnimationInfoData *mediaData; // ivar: mMedia
@property (retain, nonatomic) PDMediaNode *mediaNode; // ivar: mediaNode


-(id)description;
-(id)entranceData;
-(id)exitData;
-(void)setEntranceData:(id)arg0 ;
-(void)setExitData:(id)arg0 ;


@end


#endif