// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHASSETCOLORMAP_H
#define TSCHASSETCOLORMAP_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSCHAssetColorMap : NSObject {
    NSDictionary *_assetPathToColorMap;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(id)colorForFilename:(id)arg0 fillSetIdentifier:(id)arg1 ;
-(id)colorForFilename:(id)arg0 imageSetIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif