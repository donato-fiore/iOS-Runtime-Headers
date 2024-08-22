// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRLTTEXTFORMATTINGRANGES_H
#define BRLTTEXTFORMATTINGRANGES_H

@class NSMutableArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BRLTTextFormattingRanges : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableArray *boldRanges; // ivar: _boldRanges
@property (retain, nonatomic) NSMutableArray *italicRanges; // ivar: _italicRanges
@property (retain, nonatomic) NSMutableArray *underlineRanges; // ivar: _underlineRanges


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addBoldRange:(struct _NSRange )arg0 ;
-(void)addItalicRange:(struct _NSRange )arg0 ;
-(void)addUnderlineRange:(struct _NSRange )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif