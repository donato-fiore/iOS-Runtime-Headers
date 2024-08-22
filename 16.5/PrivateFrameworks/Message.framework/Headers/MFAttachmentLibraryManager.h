// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTLIBRARYMANAGER_H
#define MFATTACHMENTLIBRARYMANAGER_H



#import "MFAttachmentComposeManager.h"

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager



-(id)_dataProviderForAttachmentURL:(id)arg0 error:(*id)arg1 ;
-(id)attachmentsForMessage:(id)arg0 withSchemes:(id)arg1 ;
-(id)initWithPrimaryLibrary:(id)arg0 ;
-(void)removeProviderForBaseURL:(id)arg0 ;


@end


#endif