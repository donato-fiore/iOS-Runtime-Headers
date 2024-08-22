// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFFILEATTACHMENT_H
#define MFFILEATTACHMENT_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface MFFileAttachment : NSObject

@property (retain, nonatomic) NSURL *attachmentContentIDURL; // ivar: _attachmentContentIDURL
@property (copy, nonatomic) NSString *attachmentName; // ivar: _attachmentName
@property (nonatomic) int attachmentType; // ivar: _attachmentType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif