// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPTOKEN_H
#define NSPTOKEN_H

@class NSDate, NSMutableArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPToken : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSMutableArray *tokens; // ivar: _tokens


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpirationDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif