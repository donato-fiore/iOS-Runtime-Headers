// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HSISPCAPTUREPLUGIN_H
#define HSISPCAPTUREPLUGIN_H


#import <Foundation/Foundation.h>


@interface HSISPCapturePlugIn : NSObject {
    *unk _createFunction;
}




+(id)defaultPlugIn;
+(id)new;
-(id)device:(*id)arg0 ;
-(id)init;
-(id)initWithFactoryFunctionSymbol:(id)arg0 atPath:(id)arg1 ;


@end


#endif