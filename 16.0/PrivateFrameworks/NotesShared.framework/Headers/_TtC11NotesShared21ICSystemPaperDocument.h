// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11NOTESSHARED21ICSYSTEMPAPERDOCUMENT_H
#define _TTC11NOTESSHARED21ICSYSTEMPAPERDOCUMENT_H


#import <Foundation/Foundation.h>


@interface _TtC11NotesShared21ICSystemPaperDocument : NSObject {
    ? attachment;
}




+(id)assetsDirectoryAt:(id)arg0 ;
+(id)databaseDirectoryAt:(id)arg0 ;
+(void)closeContextForNote:(id)arg0 ;
-(BOOL)copyAndArchivePaperBundleTo:(id)arg0 error:(*id)arg1 ;
-(BOOL)restorePaperBundleFrom:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeNewVersionFromSyncArchive:(id)arg0 error:(*id)arg1 ;
-(id)archiveBundleForSyncAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithPaperAttachment:(id)arg0 ;


@end


#endif