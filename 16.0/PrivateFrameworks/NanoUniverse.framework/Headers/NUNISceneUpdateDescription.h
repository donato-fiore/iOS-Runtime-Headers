// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNISCENEUPDATEDESCRIPTION_H
#define NUNISCENEUPDATEDESCRIPTION_H


#import <Foundation/Foundation.h>


@interface NUNISceneUpdateDescription : NSObject

@property (readonly, nonatomic, getter=isEarth) BOOL earth;
@property (readonly, nonatomic, getter=isLuna) BOOL luna;
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (nonatomic) NSUInteger vista; // ivar: _vista


+(id)descriptionWithVista:(NSUInteger)arg0 updateBlock:(id)arg1 ;
-(id)initWithVista:(NSUInteger)arg0 updateBlock:(id)arg1 ;


@end


#endif