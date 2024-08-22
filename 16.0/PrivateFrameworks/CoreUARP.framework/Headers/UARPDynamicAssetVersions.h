// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPDYNAMICASSETVERSIONS_H
#define UARPDYNAMICASSETVERSIONS_H

@class NSURL, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "UARPSuperBinaryAsset.h"

@interface UARPDynamicAssetVersions : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_serialNumbers;
}


@property (readonly) NSArray *partnerSerialNumbers;


+(id)tag;
-(BOOL)decomposeUARP;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 ;


@end


#endif