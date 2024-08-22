// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSEMAILMODEL_H
#define MSEMAILMODEL_H

@class NSArray, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSEmailModel : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *bcc; // ivar: _bcc
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSArray *cc; // ivar: _cc
@property (retain, nonatomic) NSURL *reference; // ivar: _reference
@property (copy, nonatomic) NSString *sender; // ivar: _sender
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (copy, nonatomic) NSArray *to; // ivar: _to
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif