// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLEQPRESET_H
#define MLEQPRESET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MLEQPreset : NSObject {
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}




+(id)eqPresetForBuiltInPresetType:(int)arg0 ;
+(id)eqPresetForName:(id)arg0 ;
-(id)initWithBuiltInPresetType:(int)arg0 ;
-(id)localizedName;
-(id)name;
-(int)builtInPresetType;
-(int)typeForAVController;


@end


#endif