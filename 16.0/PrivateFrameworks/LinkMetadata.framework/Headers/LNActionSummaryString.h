// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONSUMMARYSTRING_H
#define LNACTIONSUMMARYSTRING_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNActionSummaryString : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *formatString; // ivar: _formatString
@property (readonly, nonatomic) NSArray *parameterIdentifiers; // ivar: _parameterIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormatString:(id)arg0 parameterIdentifiers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif