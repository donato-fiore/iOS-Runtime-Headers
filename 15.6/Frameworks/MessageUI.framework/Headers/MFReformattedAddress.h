// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFREFORMATTEDADDRESS_H
#define MFREFORMATTEDADDRESS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MFReformattedAddress : NSObject {
    NSString *_address;
}


@property (readonly, nonatomic) NSString *domainPart;
@property (readonly, nonatomic) NSString *localPart;
@property (nonatomic) _NSRange middleTruncationRange; // ivar: _middleTruncationRange


-(CGFloat)widthWithFontSize:(CGFloat)arg0 maximumWidth:(CGFloat)arg1 options:(NSUInteger)arg2 ;
-(id)attributedStringWithFontSize:(CGFloat)arg0 maximumWidth:(CGFloat)arg1 options:(NSUInteger)arg2 ;
-(id)description;
-(id)initWithAddress:(id)arg0 ;


@end


#endif