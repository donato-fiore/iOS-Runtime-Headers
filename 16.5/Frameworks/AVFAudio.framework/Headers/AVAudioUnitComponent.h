// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOUNITCOMPONENT_H
#define AVAUDIOUNITCOMPONENT_H

@class NSArray, NSURL, NSDictionary, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface AVAudioUnitComponent : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) NSArray *allTagNames;
@property (readonly, nonatomic) *OpaqueAudioComponent audioComponent;
@property (readonly, nonatomic) AudioComponentDescription audioComponentDescription;
@property (readonly, nonatomic) NSArray *availableArchitectures;
@property (readonly, nonatomic) NSURL *componentURL;
@property (readonly, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, nonatomic) BOOL hasCustomView;
@property (readonly, nonatomic) BOOL hasMIDIInput;
@property (readonly, nonatomic) BOOL hasMIDIOutput;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) NSString *localizedTypeName;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL passesAUVal;
@property (readonly, nonatomic, getter=isSandboxSafe) BOOL sandboxSafe;
@property (readonly, nonatomic) NSString *typeName;
@property (copy) NSArray *userTagNames;
@property (readonly, nonatomic) NSUInteger version;
@property (readonly, nonatomic) NSString *versionString;


-(BOOL)isComponentDescriptionMatch:(struct AudioComponentDescription )arg0 ;
-(BOOL)supportsNumberInputChannels:(NSInteger)arg0 outputChannels:(NSInteger)arg1 ;
-(BOOL)validateWithResults:(id)arg0 inCompletionHandler:(id)arg1 ;
-(id)GetTypeName:(unsigned int)arg0 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 ;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 withAVAUManagerImpl:(struct AVAudioUnitComponentManagerImpl *)arg1 ;
-(void)localeChanged;


@end


#endif