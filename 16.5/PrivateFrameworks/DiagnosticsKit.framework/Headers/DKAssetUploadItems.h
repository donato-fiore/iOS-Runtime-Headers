// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKASSETUPLOADITEMS_H
#define DKASSETUPLOADITEMS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DKAssetUploadItems : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
+(id)assetWithItems:(id)arg0 ;
-(id)_decoderClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif