// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXUTILITIES_H
#define FLEXUTILITIES_H


#import <Foundation/Foundation.h>


@interface FlexUtilities : NSObject



+(id)_decodeItem:(id)arg0 asClass:(Class)arg1 ;
+(id)decodeItemsInArray:(id)arg0 asClass:(Class)arg1 ;
+(id)decodeItemsInDict:(id)arg0 asClass:(Class)arg1 ;
+(id)encodeItemsInArray:(id)arg0 ;
+(id)encodeItemsInDict:(id)arg0 ;
+(id)pathToBundledResourceWithName:(id)arg0 ;
+(id)songsFoundInDeepScanOfDirectory:(id)arg0 ;


@end


#endif