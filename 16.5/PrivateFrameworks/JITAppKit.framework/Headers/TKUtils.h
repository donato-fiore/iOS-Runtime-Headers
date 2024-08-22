// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKUTILS_H
#define TKUTILS_H


#import <Foundation/Foundation.h>


@interface TKUtils : NSObject



+(BOOL)decompressFile:(id)arg0 toDestinationPath:(id)arg1 algorithm:(int)arg2 ;
+(id)URL:(id)arg0 withQueryParameters:(id)arg1 addKeys:(id)arg2 removeKeys:(id)arg3 escape:(BOOL)arg4 ;
+(id)applicationLibraryPath;
+(id)decompressData:(id)arg0 algorithm:(int)arg1 ;
+(id)decompressData:(id)arg0 algorithm:(int)arg1 operation:(int)arg2 ;
+(id)hexForColor:(id)arg0 withAlpha:(BOOL)arg1 ;
+(id)httpDataURLEncoded:(id)arg0 ;
+(id)uniqueKeyForURL:(id)arg0 ;


@end


#endif