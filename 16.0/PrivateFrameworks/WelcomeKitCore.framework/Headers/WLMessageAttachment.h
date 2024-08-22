// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLMESSAGEATTACHMENT_H
#define WLMESSAGEATTACHMENT_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface WLMessageAttachment : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (nonatomic) *NSInteger rowID; // ivar: _rowID
@property (readonly, nonatomic) NSString *uti; // ivar: _uti


-(id)_initWithData:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 ;


@end


#endif