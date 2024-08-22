// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMVISIONFEATURERECOGNIZEDTEXT_H
#define AXMVISIONFEATURERECOGNIZEDTEXT_H

@class VNRecognizedText;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMVisionFeatureRecognizedText : NSObject <NSSecureCoding>



@property (readonly, nonatomic) VNRecognizedText *text; // ivar: _text
@property (readonly, nonatomic) _NSRange textRange; // ivar: _textRange


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecognizedText:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif