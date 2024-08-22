// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIMAGEDESCRIPTORBITMAP_H
#define PKIMAGEDESCRIPTORBITMAP_H

@class NSData;


#import "PKImageDescriptor.h"
#import "PKImage.h"

@interface PKImageDescriptorBitmap : PKImageDescriptor {
    NSData *_imageHash;
}


@property (readonly, nonatomic) PKImage *image; // ivar: _image


+(BOOL)supportsSecureCoding;
+(id)createForImage:(id)arg0 withTintColor:(NSInteger)arg1 ;
+(id)createForImage:(id)arg0 withTintColor:(NSInteger)arg1 hasBackground:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif