// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMIMETEXTATTACHMENT_H
#define MFMIMETEXTATTACHMENT_H



#import "MFMessageTextAttachment.h"

@interface MFMimeTextAttachment : MFMessageTextAttachment



-(BOOL)hasBeenDownloaded;
-(id)_displayedMimePart;
-(id)initWithMimePart:(id)arg0 ;
-(unsigned int)approximateSize;
-(void)download;


@end


#endif