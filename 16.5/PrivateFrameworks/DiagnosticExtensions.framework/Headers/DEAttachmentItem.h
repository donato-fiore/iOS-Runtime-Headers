// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEATTACHMENTITEM_H
#define DEATTACHMENTITEM_H

@class NSString, NSURL, NSNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEAttachmentItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *_sandboxExtensionToken; // ivar: __sandboxExtensionToken
@property (retain, nonatomic) NSURL *attachedPath; // ivar: _attachedPath
@property (copy, nonatomic) NSString *attachmentType; // ivar: _attachmentType
@property (copy, nonatomic) NSNumber *deleteOnAttach; // ivar: _deleteOnAttach
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *filesize; // ivar: _filesize
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSURL *path; // ivar: _path
@property (retain, nonatomic) NSNumber *shouldCompress; // ivar: _shouldCompress


+(BOOL)supportsSecureCoding;
+(id)attachmentWithPath:(id)arg0 ;
+(id)attachmentWithPath:(id)arg0 withDisplayName:(id)arg1 modificationDate:(id)arg2 andFilesize:(id)arg3 ;
+(id)attachmentWithPathURL:(id)arg0 ;
-(id)attachToDestinationDir:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 withDisplayName:(id)arg1 modificationDate:(id)arg2 andFilesize:(id)arg3 ;
-(id)initWithPathURL:(id)arg0 ;
-(id)sandboxExtensionHandleWithErrorOut:(*id)arg0 ;
-(void)_generateSandboxExtensionTokenForPID:(int)arg0 ;
-(void)detach;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif