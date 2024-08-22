// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXPLUGGROUP_H
#define FXPLUGGROUP_H


#import <Foundation/Foundation.h>


@interface FxPlugGroup : NSObject {
    *FxPlugGroupPriv _priv;
}




+(id)fxPlugGroupWithDescriptor:(id)arg0 ;
-(id)descriptor;
-(id)fxPlugDescriptorAtIndex:(int)arg0 ;
-(id)initWithDescriptor:(id)arg0 ;
-(unsigned int)count;
-(void)addFxPlugDescriptor:(id)arg0 ;
-(void)dealloc;


@end


#endif