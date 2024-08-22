// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBURSTFACEINFO_H
#define CIBURSTFACEINFO_H


#import <Foundation/Foundation.h>


@interface CIBurstFaceInfo : NSObject

@property CGPoint hwCenter; // ivar: hwCenter
@property int hwFaceId; // ivar: hwFaceId
@property int hwLastFrameSeen; // ivar: hwLastFrameSeen
@property CGSize hwSize; // ivar: hwSize
@property CGPoint swCenter; // ivar: swCenter
@property int swFaceId; // ivar: swFaceId
@property int swLastFrameSeen; // ivar: swLastFrameSeen
@property CGSize swSize; // ivar: swSize


-(float)overlapWithHwRect:(struct CGRect )arg0 ;
-(float)overlapWithSwRect:(struct CGRect )arg0 ;
-(id)init;
-(struct CGRect )hwFaceRect;
-(struct CGRect )swFaceRect;


@end


#endif