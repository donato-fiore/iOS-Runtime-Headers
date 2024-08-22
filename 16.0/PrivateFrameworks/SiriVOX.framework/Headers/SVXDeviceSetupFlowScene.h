// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXDEVICESETUPFLOWSCENE_H
#define SVXDEVICESETUPFLOWSCENE_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupFlowSiriCapabilitiesHint.h"

@interface SVXDeviceSetupFlowScene : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *displayKeyFrames; // ivar: _displayKeyFrames
@property (readonly, nonatomic) NSInteger sceneID; // ivar: _sceneID
@property (readonly, copy, nonatomic) SVXDeviceSetupFlowSiriCapabilitiesHint *siriCapabilitiesHint; // ivar: _siriCapabilitiesHint
@property (readonly, copy, nonatomic) NSString *speakableText; // ivar: _speakableText


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSceneID:(NSInteger)arg0 speakableText:(id)arg1 displayKeyFrames:(id)arg2 siriCapabilitiesHint:(id)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif