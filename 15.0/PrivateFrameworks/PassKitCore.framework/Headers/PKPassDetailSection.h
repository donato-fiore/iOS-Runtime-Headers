// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSDETAILSECTION_H
#define PKPASSDETAILSECTION_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassDetailSection : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *footer; // ivar: _footer
@property (retain, nonatomic) NSString *header; // ivar: _header
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *insertAfterSection; // ivar: _insertAfterSection
@property (retain, nonatomic) NSArray *rows; // ivar: _rows


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 privateBundle:(id)arg2 ;
-(id)initWithRows:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif