// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPARCHIVETEMPORARYFOLDER_H
#define FPARCHIVETEMPORARYFOLDER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}




-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)temporaryFolderURLGetError:(*id)arg0 ;
-(void)dealloc;


@end


#endif