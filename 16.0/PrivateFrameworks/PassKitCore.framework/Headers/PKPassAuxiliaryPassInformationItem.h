// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSAUXILIARYPASSINFORMATIONITEM_H
#define PKPASSAUXILIARYPASSINFORMATIONITEM_H

@class NSString, NSArray, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassAuxiliaryPassInformationItem : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *detailFooterLeadingText; // ivar: _detailFooterLeadingText
@property (retain, nonatomic) NSString *detailFooterLeadingTitle; // ivar: _detailFooterLeadingTitle
@property (retain, nonatomic) NSString *detailFooterTrailingText; // ivar: _detailFooterTrailingText
@property (retain, nonatomic) NSString *detailFooterTrailingTitle; // ivar: _detailFooterTrailingTitle
@property (retain, nonatomic) NSArray *fields; // ivar: _fields
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSURL *mapsURL; // ivar: _mapsURL
@property (nonatomic) NSInteger merchantCategory; // ivar: _merchantCategory
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemInformation:(id)arg0 bundle:(id)arg1 privateBundle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif