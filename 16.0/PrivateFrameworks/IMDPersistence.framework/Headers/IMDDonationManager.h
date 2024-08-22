// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDDONATIONMANAGER_H
#define IMDDONATIONMANAGER_H

@class NSFileManager;

#import <Foundation/Foundation.h>


@interface IMDDonationManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager


+(id)sharedInstance;
-(id)init;
-(void)copyGroupPhotoToExternalPathIfNecessary:(id)arg0 chatGUID:(id)arg1 attachmentFilepath:(id)arg2 ;
-(void)dealloc;


@end


#endif