// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWATCHCOMPLICATIONSWIDGETSNAPSHOTMETADATAIMAGEDATA_H
#define CHUISWATCHCOMPLICATIONSWIDGETSNAPSHOTMETADATAIMAGEDATA_H

@class NSFileHandle, UIImage, NSString;
@protocol NSCopying, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface CHUISWatchComplicationsWidgetSnapshotMetadataImageData : NSObject <NSCopying, BSXPCSecureCoding>

 {
    NSFileHandle *_imageFileHandle;
    UIImage *_image;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) UIImage *image;
@property (readonly, nonatomic, getter=isPrivateSymbol) BOOL privateSymbol; // ivar: _privateSymbol
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *symbolName; // ivar: _symbolName


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyForEncodingAtUrl:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithPrivateSymbolName:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif