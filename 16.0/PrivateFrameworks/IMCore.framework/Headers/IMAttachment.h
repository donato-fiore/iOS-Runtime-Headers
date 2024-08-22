// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMATTACHMENT_H
#define IMATTACHMENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface IMAttachment : NSObject

@property (retain, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (nonatomic) BOOL isSticker; // ivar: _isSticker
@property (nonatomic) BOOL isTransferComplete; // ivar: _isTransferComplete
@property (retain, nonatomic) NSString *path; // ivar: _path


-(id)description;
-(id)fileTransfer;
-(id)initWithPath:(id)arg0 guid:(id)arg1 ;
-(id)initWithPath:(id)arg0 guid:(id)arg1 createdDate:(id)arg2 isSticker:(BOOL)arg3 isTransferComplete:(BOOL)arg4 ;


@end


#endif