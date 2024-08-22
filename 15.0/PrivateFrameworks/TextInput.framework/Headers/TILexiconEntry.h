// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILEXICONENTRY_H
#define TILEXICONENTRY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *documentText; // ivar: _documentText
@property (readonly, nonatomic) NSString *userInput; // ivar: _userInput


+(BOOL)supportsSecureCoding;
+(id)entryWithDocumentText:(id)arg0 userInput:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif