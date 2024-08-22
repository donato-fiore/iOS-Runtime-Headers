// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCREDENTIALSEARCHFILTER_H
#define SFCREDENTIALSEARCHFILTER_H

@class NSPredicate, NSDate, NSArray<_SFServiceIdentifier>, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFCredentialSearchFilter : NSObject <NSCopying, NSSecureCoding>

 {
    id *_credentialSearchFilterInternal;
}


@property (retain, nonatomic) NSPredicate *attributesPredicate; // ivar: _attributesPredicate
@property (retain, nonatomic) NSDate *maximumCreationDate;
@property (retain, nonatomic) NSDate *maximumModificationDate;
@property (retain, nonatomic) NSDate *minimumCreationDate;
@property (retain, nonatomic) NSDate *minimumModificationDate;
@property (retain, nonatomic) NSArray<_SFServiceIdentifier> *serviceIdentifiers;
@property (retain, nonatomic) NSArray *usernames;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif