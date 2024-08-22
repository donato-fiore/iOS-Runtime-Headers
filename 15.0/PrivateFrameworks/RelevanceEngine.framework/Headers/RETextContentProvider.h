// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RETEXTCONTENTPROVIDER_H
#define RETEXTCONTENTPROVIDER_H

@class NSString;
@protocol REContentEncodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RETextContentProvider : NSObject <REContentEncodable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *contentEncodedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)contentProviderFromAttributedString:(id)arg0 ;
+(id)contentProviderFromClockKitTextProvider:(id)arg0 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif