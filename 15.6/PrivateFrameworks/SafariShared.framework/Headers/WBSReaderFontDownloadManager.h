// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSREADERFONTDOWNLOADMANAGER_H
#define WBSREADERFONTDOWNLOADMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSReaderFontDownloadManager : NSObject {
    NSMutableDictionary *_fontFamilyToProgress;
}




+(id)sharedManager;
-(BOOL)hasOngoingRequestForFont:(id)arg0 ;
-(CGFloat)downloadProgressForFont:(id)arg0 ;
-(id)init;
-(void)downloadFont:(id)arg0 ;


@end


#endif