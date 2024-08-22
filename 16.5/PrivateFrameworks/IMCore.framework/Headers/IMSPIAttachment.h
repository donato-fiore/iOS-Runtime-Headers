// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSPIATTACHMENT_H
#define IMSPIATTACHMENT_H

@class NSDictionary, NSDate, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface IMSPIAttachment : NSObject

@property (retain) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (readonly) NSDate *creationDate; // ivar: _creationDate
@property NSInteger fileTransferState; // ivar: _fileTransferState
@property (retain) NSURL *fileUrl; // ivar: _fileUrl
@property (retain) NSString *guid; // ivar: _guid
@property BOOL isOutgoing; // ivar: _isOutgoing
@property BOOL isSticker; // ivar: _isSticker
@property (retain) NSString *uti; // ivar: _uti


-(id)bundleID;
-(id)description;
-(id)initWithGuid:(id)arg0 fileUrl:(id)arg1 transferState:(NSInteger)arg2 uti:(id)arg3 isSticker:(BOOL)arg4 isOutgoing:(BOOL)arg5 attributionInfo:(id)arg6 creationDate:(id)arg7 ;


@end


#endif