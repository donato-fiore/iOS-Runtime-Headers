// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORRICHLINKATTACHMENTSUBSTITUTER_H
#define _BLASTDOORRICHLINKATTACHMENTSUBSTITUTER_H

@class NSMutableArray, NSArray, NSString;
@protocol NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface _BlastDoorRichLinkAttachmentSubstituter : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate>



@property (readonly, copy, nonatomic) NSMutableArray *archivedAttachments; // ivar: _archivedAttachments
@property (copy, nonatomic) NSArray *attachmentsForUnarchiving; // ivar: _attachmentsForUnarchiving
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldIgnoreAppStoreMetadata; // ivar: _shouldIgnoreAppStoreMetadata
@property (nonatomic) BOOL shouldSubstituteAttachments; // ivar: _shouldSubstituteAttachments
@property (readonly) Class superclass;


-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
-(id)init;
-(id)unarchiver:(id)arg0 didDecodeObject:(id)arg1 ;


@end


#endif