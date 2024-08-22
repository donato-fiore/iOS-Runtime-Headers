// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCRECORDINGSFOLDER_H
#define RCRECORDINGSFOLDER_H

@class NSManagedObject, NSString;
@protocol RCMutableFolder, RCFolderIdentifier;



@interface RCRecordingsFolder : NSManagedObject <RCMutableFolder>

 {
    BOOL _isEncrypted;
    BOOL _isEncryptedIsSet;
}


@property (readonly, nonatomic) NSInteger countOfRecordings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *encryptedName;
@property (nonatomic) int flags;
@property (readonly, nonatomic) NSObject<RCFolderIdentifier> *folderControllerID;
@property (readonly, nonatomic) NSInteger folderType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (nonatomic) BOOL isHidden;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger rank;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *uuid;


+(id)keyPathsForValuesAffectingCount;
-(BOOL)containsRecording:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 rank:(NSInteger)arg2 uuid:(id)arg3 useEncryptedStore:(BOOL)arg4 ;
-(void)addRecording:(id)arg0 ;
-(void)removeRecording:(id)arg0 ;


@end


#endif