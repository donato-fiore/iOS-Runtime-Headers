// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTPHONEBOOKENTRY_H
#define CTPHONEBOOKENTRY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPhoneBookEntry : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *altNumber; // ivar: _altNumber
@property (retain, nonatomic) NSString *altText; // ivar: _altText
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSString *group; // ivar: _group
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *number; // ivar: _number


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif