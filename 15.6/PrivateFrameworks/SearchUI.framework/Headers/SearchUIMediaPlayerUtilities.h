// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMEDIAPLAYERUTILITIES_H
#define SEARCHUIMEDIAPLAYERUTILITIES_H


#import <Foundation/Foundation.h>


@interface SearchUIMediaPlayerUtilities : NSObject



+(NSInteger)MPMediaEntityTypeForSFMediaEntityType:(int)arg0 ;
+(NSInteger)MPMediaGroupingForMPMediaEntityType:(NSInteger)arg0 ;
+(id)filterPropertyForMPMediaEntityType:(NSInteger)arg0 ;
+(void)fetchVideoPunchoutForActionItem:(id)arg0 completion:(id)arg1 ;


@end


#endif