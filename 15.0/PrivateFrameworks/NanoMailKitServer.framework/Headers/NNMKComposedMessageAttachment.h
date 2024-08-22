// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKCOMPOSEDMESSAGEATTACHMENT_H
#define NNMKCOMPOSEDMESSAGEATTACHMENT_H

@class NSData, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NNMKComposedMessageAttachment : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSString *utiType; // ivar: _utiType


+(BOOL)supportsSecureCoding;
-(BOOL)prepareForArchiving;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logTransmission;


@end


#endif