// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXBRAILLEMAP_H
#define AXBRAILLEMAP_H

@class NSMutableDictionary, CIImage;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXBrailleMap : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_values;
    CIImage *_presentedImage;
}


@property (nonatomic) CGSize dimensions; // ivar: _dimensions


+(BOOL)supportsSecureCoding;
+(id)connectedBrailleMap;
-(float)heightAtPoint:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)presentedImage;
-(void)encodeWithCoder:(id)arg0 ;
-(void)presentImage:(struct CGImage *)arg0 ;
-(void)setHeight:(float)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif