// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIMAGEICON_H
#define WFIMAGEICON_H



#import "WFIcon.h"
#import "WFImage.h"

@interface WFImageIcon : WFIcon

@property (readonly, nonatomic) WFImage *image; // ivar: _image


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif