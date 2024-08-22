// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGELIBRARYSETCONTENTPROTECTIONFORATTACHMENTSUPGRADESTEP_H
#define MFMESSAGELIBRARYSETCONTENTPROTECTIONFORATTACHMENTSUPGRADESTEP_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface MFMessageLibrarySetContentProtectionForAttachmentsUpgradeStep : NSObject

@property (readonly, nonatomic) NSURL *baseAttachmentsDirectory; // ivar: _baseAttachmentsDirectory


+(id)log;
-(BOOL)performMigrationStep;
-(id)initWithBaseAttachmentsDirectory:(id)arg0 ;


@end


#endif