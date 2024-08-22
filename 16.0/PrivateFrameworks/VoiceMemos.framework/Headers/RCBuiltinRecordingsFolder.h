// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCBUILTINRECORDINGSFOLDER_H
#define RCBUILTINRECORDINGSFOLDER_H

@class NSString;
@protocol RCFolder, RCFolderIdentifier;

#import <Foundation/Foundation.h>


@interface RCBuiltinRecordingsFolder : NSObject <RCFolder>

 {
    NSInteger _folderType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<RCFolderIdentifier> *folderControllerID;
@property (readonly, nonatomic) NSInteger folderType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger rank;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;


-(BOOL)containsRecording:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif