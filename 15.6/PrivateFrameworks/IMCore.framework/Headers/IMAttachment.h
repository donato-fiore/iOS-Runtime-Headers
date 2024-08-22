// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMATTACHMENT_H
#define IMATTACHMENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface IMAttachment : NSObject {
    NSString *_guid;
    NSString *_path;
    BOOL _isSticker;
    BOOL _isTransferComplete;
    NSDate *_createdDate;
}




-(BOOL)isSticker;
-(BOOL)isTransferComplete;
-(id)createdDate;
-(id)description;
-(id)fileTransfer;
-(id)guid;
-(id)initWithPath:(id)arg0 guid:(id)arg1 ;
-(id)initWithPath:(id)arg0 guid:(id)arg1 createdDate:(id)arg2 isSticker:(BOOL)arg3 isTransferComplete:(BOOL)arg4 ;
-(id)path;


@end


#endif