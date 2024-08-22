// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKLABELEXTERNALICONELEMENT_H
#define VKLABELEXTERNALICONELEMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VKLabelExternalIconElement : NSObject <NSSecureCoding>

 {
    LabelExternalIconElement _element;
}




+(BOOL)supportsSecureCoding;
-(*void)element;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIconElement:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif