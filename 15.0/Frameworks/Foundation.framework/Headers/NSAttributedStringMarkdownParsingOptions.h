// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSATTRIBUTEDSTRINGMARKDOWNPARSINGOPTIONS_H
#define NSATTRIBUTEDSTRINGMARKDOWNPARSINGOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying>



@property BOOL allowsExtendedAttributes; // ivar: _allowsExtendedAttributes
@property NSInteger failurePolicy; // ivar: _failurePolicy
@property NSInteger interpretedSyntax; // ivar: _interpretedSyntax
@property (copy) NSString *languageCode; // ivar: _languageCode


+(id)_localizedAttributedStringParsingOptions;
+(id)allowingExtendedAttributes;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif