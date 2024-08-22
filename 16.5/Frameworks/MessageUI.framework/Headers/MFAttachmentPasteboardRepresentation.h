// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTPASTEBOARDREPRESENTATION_H
#define MFATTACHMENTPASTEBOARDREPRESENTATION_H

@class NSData, NSString;
@protocol NSSecureCoding, MFAttachmentPasteboardRepresentation;

#import <Foundation/Foundation.h>


@interface MFAttachmentPasteboardRepresentation : NSObject <NSSecureCoding, MFAttachmentPasteboardRepresentation>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
-(id)initWithAttachment:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMFAttachment:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif