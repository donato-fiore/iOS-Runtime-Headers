// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPLAYSOUND_H
#define SKPLAYSOUND_H

@class NSString;


#import "SKAction.h"
#import "SKSoundSource.h"

@interface SKPlaySound : SKAction {
    NSString *_filePath;
    NSString *_fileName;
    *SKCPlaySound _mycaction;
    CGPoint _position;
    SKSoundSource *_soundSource;
}




+(BOOL)supportsSecureCoding;
+(id)_audioURLWithName:(id)arg0 bundle:(id)arg1 ;
+(id)playSoundFileNamed:(id)arg0 atPosition:(struct CGPoint )arg1 waitForCompletion:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif