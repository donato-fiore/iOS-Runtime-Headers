// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOUNITCOMPONENTMANAGER_H
#define AVAUDIOUNITCOMPONENTMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVAudioUnitComponentManager : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) NSArray *standardLocalizedTagNames;
@property (readonly, nonatomic) NSArray *tagNames;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedAudioUnitComponentManager;
+(void)privateAllocInitSingleton;
-(id)componentsMatchingDescription:(struct AudioComponentDescription )arg0 ;
-(id)componentsMatchingPredicate:(id)arg0 ;
-(id)componentsPassingTest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)localeChanged:(id)arg0 ;
-(void)registrationsChanged:(id)arg0 ;


@end


#endif