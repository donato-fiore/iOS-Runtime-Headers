// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDICTATIONTOKEN_H
#define UIDICTATIONTOKEN_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIDictationToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL removeSpaceAfter; // ivar: _removeSpaceAfter
@property (nonatomic) BOOL removeSpaceBefore; // ivar: _removeSpaceBefore
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionExtra;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 removeSpaceBefore:(BOOL)arg1 removeSpaceAfter:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif