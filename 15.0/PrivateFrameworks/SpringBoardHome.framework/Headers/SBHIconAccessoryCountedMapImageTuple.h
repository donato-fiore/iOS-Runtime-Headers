// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHICONACCESSORYCOUNTEDMAPIMAGETUPLE_H
#define SBHICONACCESSORYCOUNTEDMAPIMAGETUPLE_H

@class NSString, UIImage;
@protocol SBCountedMapValue, NSCopying><NSObject;

#import <Foundation/Foundation.h>


@interface SBHIconAccessoryCountedMapImageTuple : NSObject <SBCountedMapValue>

 {
    NSUInteger _hash;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSObject<NSCopying><NSObject> *sbh_countedMapKey; // ivar: _countedMapKey
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImage:(id)arg0 countedMapKey:(id)arg1 ;
-(id)initWithImage:(id)arg0 countedMapKey:(id)arg1 hash:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif