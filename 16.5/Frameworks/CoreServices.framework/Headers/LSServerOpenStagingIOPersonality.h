// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSSERVEROPENSTAGINGIOPERSONALITY_H
#define LSSERVEROPENSTAGINGIOPERSONALITY_H

@class NSString;
@protocol LSOpenStagingDirectoryManagerIOPersonality;

#import <Foundation/Foundation.h>


@interface LSServerOpenStagingIOPersonality : NSObject <LSOpenStagingDirectoryManagerIOPersonality>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)mainUserContainerURL;
-(id)makeStagingDirectoryNodeInContainer:(id)arg0 error:(*id)arg1 ;
-(struct optional<LaunchServices::StagingDirectoryInfo> )stagingDirectoryInfoForPersonaUniqueString:(id)arg0 error:(*id)arg1 ;
-(struct optional<unsigned long long> )stagingDirectoryKeyForFileHandle:(id)arg0 error:(*id)arg1 ;
-(struct optional<unsigned long long> )stagingDirectoryKeyForNode:(id)arg0 error:(*id)arg1 ;


@end


#endif