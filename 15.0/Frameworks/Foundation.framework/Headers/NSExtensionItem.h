// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSEXTENSIONITEM_H
#define NSEXTENSIONITEM_H

@class NSMutableDictionary, NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSAttributedString.h"

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_userInfo;
}


@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
-(id)_matchingDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif