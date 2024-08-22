// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKASSETUPLOADITEM_H
#define DKASSETUPLOADITEM_H

@class NSData, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DKAssetUploadItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSDictionary *extra; // ivar: _extra


+(BOOL)supportsSecureCoding;
+(id)assetWithData:(id)arg0 andExtra:(id)arg1 ;
-(id)_decoderClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 andExtra:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif