// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSIRIASSETDOWNLOADSTATUSCODER_H
#define HPSSIRIASSETDOWNLOADSTATUSCODER_H

@protocol _TtP15HomePodSettings18MessageSerializing_;

#import <Foundation/Foundation.h>


@interface HPSSiriAssetDownloadStatusCoder : NSObject <_TtP15HomePodSettings18MessageSerializing_>





-(BOOL)deserialize:(id)arg0 withElement:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)serialize:(id)arg0 error:(*id)arg1 ;


@end


#endif