// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSSCREENREADERMODE_H
#define VOSSCREENREADERMODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VOSScreenreaderMode : NSObject {
    NSString *_rawValue;
}


@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *rawValue;


+(id)BrailleScreenInput;
+(id)Default;
+(id)Handwriting;
+(id)Invalid;
+(id)allModes;
+(id)modeWithStringValue:(id)arg0 ;
-(id)_initWithRawValue:(id)arg0 ;
-(id)description;


@end


#endif