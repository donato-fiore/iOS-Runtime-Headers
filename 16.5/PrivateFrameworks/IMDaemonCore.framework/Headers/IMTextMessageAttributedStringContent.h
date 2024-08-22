// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTEXTMESSAGEATTRIBUTEDSTRINGCONTENT_H
#define IMTEXTMESSAGEATTRIBUTEDSTRINGCONTENT_H

@class NSArray, NSAttributedString;

#import <Foundation/Foundation.h>


@interface IMTextMessageAttributedStringContent : NSObject

@property (readonly, nonatomic) NSArray *fileTransferGuids; // ivar: _fileTransferGuids
@property (readonly, nonatomic) NSAttributedString *messageBodyWithNativeAttributes; // ivar: _messageBodyWithNativeAttributes


-(id)initWithMessageBodyWithNativeAttributes:(id)arg0 fileTransferGuids:(id)arg1 ;


@end


#endif