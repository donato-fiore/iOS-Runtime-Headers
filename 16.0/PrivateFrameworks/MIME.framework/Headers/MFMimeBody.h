// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMIMEBODY_H
#define MFMIMEBODY_H

@class NSString, NSArray;
@protocol ECMimeBody;


#import "MFMessageBody.h"
#import "MFMimePart.h"

@interface MFMimeBody : MFMessageBody <ECMimeBody>

 {
    MFMimePart *_topLevelPart;
    BOOL _preferredAlternative;
    BOOL _numAlternatives;
    NSInteger _encryptedDescendantState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEncryptedDescendantPart;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (readonly, copy, nonatomic) NSString *mimeSubtype;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSArray *signers; // ivar: _signers
@property (readonly) Class superclass;
@property (retain, nonatomic) MFMimePart *topLevelPart;
@property (readonly, nonatomic) NSUInteger totalTextSize;


+(id)copyNewMimeBoundary;
+(id)versionString;
-(BOOL)isHTML;
-(BOOL)isRich;
-(NSInteger)numberOfAlternatives;
-(NSInteger)preferredAlternative;
-(id)attachmentURLs;
-(id)attachments;
-(id)contentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 asHTML:(BOOL)arg2 isComplete:(*BOOL)arg3 ;
-(id)init;
-(id)partWithNumber:(id)arg0 ;
-(id)preferredBodyPart;
-(id)textHtmlPart;
-(unsigned int)numberOfAttachmentsSigned:(*BOOL)arg0 encrypted:(*BOOL)arg1 ;
-(void)setPreferredAlternative:(NSInteger)arg0 ;


@end


#endif