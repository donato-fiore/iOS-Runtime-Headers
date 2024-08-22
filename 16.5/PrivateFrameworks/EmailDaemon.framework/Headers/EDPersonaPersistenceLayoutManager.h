// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPERSONAPERSISTENCELAYOUTMANAGER_H
#define EDPERSONAPERSISTENCELAYOUTMANAGER_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDPersonaPersistenceLayoutManager : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)baseAccountDirectoryForPersonaIdentifier:(id)arg0 ;
+(id)baseAccountDirectoryPathForPersonaIdentifier:(id)arg0 ;
+(id)iOS_baseAccountDirectoryPathForPersonaIdentifier:(id)arg0 ;
+(id)log;
+(id)macOS_baseAccountDirectoryPathForPersonaIdentifier:(id)arg0 ;


@end


#endif