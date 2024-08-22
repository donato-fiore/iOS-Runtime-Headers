// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRTAPTORADARMANAGER_H
#define TVRTAPTORADARMANAGER_H

@class NSURLComponents;

#import <Foundation/Foundation.h>


@interface TVRTapToRadarManager : NSObject

@property (retain, nonatomic) NSURLComponents *urlComponents; // ivar: _urlComponents


+(id)_captureScreenshot;
+(id)bugImage;
+(void)fileRadarWithTitle:(id)arg0 description:(id)arg1 ;
-(void)fileRadar;


@end


#endif