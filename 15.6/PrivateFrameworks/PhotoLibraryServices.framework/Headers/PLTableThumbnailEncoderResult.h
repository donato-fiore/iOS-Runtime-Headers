// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLTABLETHUMBNAILENCODERRESULT_H
#define PLTABLETHUMBNAILENCODERRESULT_H

@class NSData, PLImageFormat, NSString;

#import <Foundation/Foundation.h>


@interface PLTableThumbnailEncoderResult : NSObject

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) PLImageFormat *imageFormat; // ivar: _imageFormat
@property (readonly, nonatomic) NSData *ktxData; // ivar: _ktxData
@property (readonly, nonatomic) NSData *ktxHeaderData;
@property (readonly, nonatomic) PLImageTableEntryFooter_s tableFooter;
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(NSUInteger)_minKtxDataLengthFromImageSize:(struct CGSize )arg0 ;
-(id)entryDataForEntryLength:(NSUInteger)arg0 ;
-(id)initWithKtxData:(id)arg0 uuid:(id)arg1 format:(id)arg2 ;
-(struct PL_KTXHeader *)_ktxHeader;


@end


#endif