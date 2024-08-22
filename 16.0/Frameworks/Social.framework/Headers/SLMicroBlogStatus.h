// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLMICROBLOGSTATUS_H
#define SLMICROBLOGSTATUS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLMicroBlogStatus : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *imageAssetURLs; // ivar: _imageAssetURLs
@property (retain, nonatomic) NSArray *imageData; // ivar: _imageData
@property (retain, nonatomic) NSString *inReplyToStatusID; // ivar: _inReplyToStatusID
@property (retain, nonatomic) NSString *maskedApplicationID; // ivar: _maskedApplicationID
@property (retain, nonatomic) NSString *statusText; // ivar: _statusText


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadAssetDataIfNecessaryWithMaxByteSize:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif