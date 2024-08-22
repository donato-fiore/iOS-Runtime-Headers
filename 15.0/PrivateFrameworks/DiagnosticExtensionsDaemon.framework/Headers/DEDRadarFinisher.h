// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDRADARFINISHER_H
#define DEDRADARFINISHER_H

@class NSString, NSMutableSet;
@protocol NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving, OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDBugSession.h"

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property float percentComplete; // ivar: _percentComplete
@property (weak) DEDBugSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain) NSMutableSet *uploadItems; // ivar: _uploadItems


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(BOOL)allUploadsComplete;
-(id)folderNameForAttachmentGroup:(id)arg0 ;
-(id)getUploadItemForTask:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 session:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishSession:(id)arg0 withConfiguration:(id)arg1 ;


@end


#endif