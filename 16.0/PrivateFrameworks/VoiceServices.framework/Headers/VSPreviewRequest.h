// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPREVIEWREQUEST_H
#define VSPREVIEWREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSPreviewRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) NSInteger previewType; // ivar: _previewType
@property (nonatomic) NSUInteger requestCreatedTimestamp; // ivar: _requestCreatedTimestamp
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif