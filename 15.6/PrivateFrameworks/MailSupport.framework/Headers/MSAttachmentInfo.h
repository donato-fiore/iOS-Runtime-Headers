// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSATTACHMENTINFO_H
#define MSATTACHMENTINFO_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSAttachmentInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 filename:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif