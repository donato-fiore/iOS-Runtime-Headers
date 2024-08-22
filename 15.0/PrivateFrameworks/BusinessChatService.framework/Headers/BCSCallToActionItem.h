// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSCALLTOACTIONITEM_H
#define BCSCALLTOACTIONITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCSCallToActionItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) BOOL isDefault; // ivar: _isDefault
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCallToAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 language:(id)arg2 body:(id)arg3 isDefault:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif