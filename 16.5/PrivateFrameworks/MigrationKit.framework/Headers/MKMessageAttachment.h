// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMESSAGEATTACHMENT_H
#define MKMESSAGEATTACHMENT_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface MKMessageAttachment : NSObject

@property (copy, nonatomic) NSString *ID; // ivar: _ID
@property (copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (nonatomic) NSInteger transferState; // ivar: _transferState
@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


-(id)initWithID:(id)arg0 contentType:(id)arg1 base64Data:(id)arg2 ;
-(void)write;


@end


#endif