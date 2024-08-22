// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSIMAGEELEMENTHELPER_H
#define VSIMAGEELEMENTHELPER_H


#import <Foundation/Foundation.h>


@interface VSImageElementHelper : NSObject

@property (nonatomic) NSInteger currentUserInterfaceStyle; // ivar: _currentUserInterfaceStyle
@property (nonatomic) CGFloat deviceScale; // ivar: _deviceScale


-(id)bestMatchingKeyForScale:(CGFloat)arg0 withSuffix:(id)arg1 inKeysSet:(id)arg2 ;
-(id)bestMatchingKeyForSrcset:(id)arg0 ;
-(id)init;
-(id)keysForScale:(CGFloat)arg0 withSuffix:(id)arg1 ;
-(id)matchingKeyForScale:(CGFloat)arg0 withSuffix:(id)arg1 inKeysSet:(id)arg2 ;


@end


#endif