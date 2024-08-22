// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPMOREINFOITEM_H
#define PKPAYMENTSETUPMOREINFOITEM_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupMoreInfoItem : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _hideAlternativeAction;
    NSString *_nextActionOverride;
    NSString *_doneActionOverride;
    NSString *_alternativeActionOverride;
}


@property (readonly, copy, nonatomic) NSString *alternativeAction; // ivar: _alternativeAction
@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy, nonatomic) NSString *doneAction; // ivar: _doneAction
@property (readonly, nonatomic) BOOL hasAlternativeAction; // ivar: _hasAlternativeAction
@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, copy, nonatomic) NSString *linkText; // ivar: _linkText
@property (readonly, copy, nonatomic) NSURL *linkURL; // ivar: _linkURL
@property (readonly, copy, nonatomic) NSString *nextAction; // ivar: _nextAction
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMoreInfoDictionary:(id)arg0 ;
-(id)initWithMoreInfoDictionary:(id)arg0 imageData:(id)arg1 ;
-(void)_updateActionStrings;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif