// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCBUILTINRECORDINGSFOLDER_H
#define RCBUILTINRECORDINGSFOLDER_H

@class NSString, NSSet;
@protocol RCFolder, RCFolderIdentifier;

#import <Foundation/Foundation.h>

#import "RCSavedRecordingsController.h"

@interface RCBuiltinRecordingsFolder : NSObject <RCFolder>

 {
    NSInteger _folderType;
}


@property (readonly, nonatomic) RCSavedRecordingsController *contentsController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger folderType;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger playableCount;
@property (readonly, nonatomic) NSInteger rank;
@property (readonly, nonatomic) NSSet *recordings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<RCFolderIdentifier> *uniqueID;
@property (readonly, nonatomic) NSString *uuid;


-(BOOL)containsRecording:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif