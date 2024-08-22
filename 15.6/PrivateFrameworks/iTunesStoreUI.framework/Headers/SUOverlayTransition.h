// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUOVERLAYTRANSITION_H
#define SUOVERLAYTRANSITION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUDOMElement.h"

@interface SUOverlayTransition : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) SUDOMElement *sourceElement; // ivar: _sourceElement
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)transitionTypeFromString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif