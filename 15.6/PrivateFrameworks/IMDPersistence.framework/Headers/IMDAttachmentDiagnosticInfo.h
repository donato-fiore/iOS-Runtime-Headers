// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDATTACHMENTDIAGNOSTICINFO_H
#define IMDATTACHMENTDIAGNOSTICINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMDAttachmentDiagnosticInfo : NSObject

@property (nonatomic) NSUInteger ck_sync_state; // ivar: _ck_sync_state
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (nonatomic) NSUInteger hide_attachment; // ivar: _hide_attachment
@property (retain, nonatomic) NSString *originalGUID; // ivar: _originalGUID
@property (nonatomic) NSUInteger total_bytes; // ivar: _total_bytes
@property (nonatomic) NSUInteger transfer_state; // ivar: _transfer_state


-(id)description;


@end


#endif