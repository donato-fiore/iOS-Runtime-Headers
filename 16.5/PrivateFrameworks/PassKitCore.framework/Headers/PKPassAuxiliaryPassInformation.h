// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSAUXILIARYPASSINFORMATION_H
#define PKPASSAUXILIARYPASSINFORMATION_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassAuxiliaryPassInformation : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInformation:(id)arg0 bundle:(id)arg1 privateBundle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif