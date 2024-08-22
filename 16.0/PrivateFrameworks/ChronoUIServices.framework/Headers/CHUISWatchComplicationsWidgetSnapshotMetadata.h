// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWATCHCOMPLICATIONSWIDGETSNAPSHOTMETADATA_H
#define CHUISWATCHCOMPLICATIONSWIDGETSNAPSHOTMETADATA_H

@class NSString, CHSGaugeParameters, NSData, UIImage, NSArray;
@protocol NSCopying, NSMutableCopying, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface CHUISWatchComplicationsWidgetSnapshotMetadata : NSObject <NSCopying, NSMutableCopying, BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CHSGaugeParameters *gauge; // ivar: _gauge
@property (readonly, copy, nonatomic) NSData *gaugeLowerTextProviderData; // ivar: _gaugeLowerTextProviderData
@property (readonly, copy, nonatomic) NSData *gaugeProviderData; // ivar: _gaugeProviderData
@property (readonly, copy, nonatomic) NSData *gaugeUpperTextProviderData; // ivar: _gaugeUpperTextProviderData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSArray *images; // ivar: _images
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *text; // ivar: _text


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSnapshotMetadata:(id)arg0 ;
-(id)copyForEncodingAtUrl:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif