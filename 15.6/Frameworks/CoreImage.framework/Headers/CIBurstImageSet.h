// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBURSTIMAGESET_H
#define CIBURSTIMAGESET_H


#import <Foundation/Foundation.h>

#import "CIBurstImageSetInternal.h"

@interface CIBurstImageSet : NSObject {
    CIBurstImageSetInternal *_priv;
}




+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg0 ;
+(id)defaultVersionString;
-(BOOL)isAction;
-(BOOL)isPortrait;
-(CGFloat)secondsSinceStart;
-(NSUInteger)imageClusterCount;
-(id)allImageIdentifiers;
-(id)bestImageIdentifiers;
-(id)burstId;
-(id)coverImageIdentifier;
-(id)imageClusterForIdentifier:(id)arg0 ;
-(id)imageClusterForIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)statsForImageWithIdentifier:(id)arg0 ;
-(void)addImageFromIOSurface:(struct __IOSurface *)arg0 properties:(id)arg1 identifier:(id)arg2 completionBlock:(id)arg3 ;
-(void)dealloc;
-(void)setLoggingListener:(*void)arg0 withUserInfo:(*void)arg1 ;


@end


#endif