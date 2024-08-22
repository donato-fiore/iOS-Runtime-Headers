// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OABBLIP_H
#define OABBLIP_H


#import <Foundation/Foundation.h>


@interface OABBlip : NSObject



+(?)writeEmptyBlipStoreEntry;
+(id)compressMetafileData:(id)arg0 info:(*void)arg1 ;
+(id)delayedSubBlipWithMetafileInfo:(*void)arg0 ;
+(id)dibFileContentsWithDibBlipData:(struct OcBinaryData *)arg0 ;
+(id)readBlipFromBse:(id)arg0 ;
+(id)readBlipFromEshBlip:(struct EshBlip *)arg0 ;
+(id)subBlipWithMetafileInfo:(*void)arg0 ;
+(int)blipTypeForBlipSignature:(int)arg0 ;
+(struct EshBlip *)writeBlip:(id)arg0 ;
+(void)setMetafileBoundsFromPictData:(id)arg0 info:(*void)arg1 ;
+(void)writeBlip:(id)arg0 toBlipStoreEntry:(struct EshBSE *)arg1 ;


@end


#endif