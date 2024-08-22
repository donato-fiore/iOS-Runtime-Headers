// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXPLUGGROUPDESCRIPTOR_H
#define FXPLUGGROUPDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface FxPlugGroupDescriptor : NSObject {
    *FxPlugGroupDescriptorPriv _priv;
}




+(id)fxPlugGroupDescriptorWithUUID:(id)arg0 andDisplayName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)displayName;
-(id)initWithUUID:(id)arg0 andDisplayName:(id)arg1 ;
-(id)uuid;
-(void)dealloc;


@end


#endif