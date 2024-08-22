// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPAYMENTSHEETRATINGIMAGE_H
#define SSPAYMENTSHEETRATINGIMAGE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSPaymentSheetRatingImage : NSObject <NSCopying>

 {
    *CGImage _image;
}


@property (readonly) NSInteger ratingType; // ivar: _ratingType
@property (readonly) BOOL tint;
@property (readonly, copy) NSString *urlString; // ivar: _urlString
@property (readonly, copy) NSString *value; // ivar: _value


-(BOOL)isServerSupplied;
-(NSInteger)_ratingTypeForType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithURLString:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)localAssetName;


@end


#endif