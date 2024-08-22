// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FARECOMMENDEDFAMILYMEMBER_H
#define FARECOMMENDEDFAMILYMEMBER_H

@class CNContact, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FARecommendedFamilyMember : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (copy, nonatomic) NSString *iMessageHandle; // ivar: _iMessageHandle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_safeClasses;
-(id)contactFromRecommendationWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecommendation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif