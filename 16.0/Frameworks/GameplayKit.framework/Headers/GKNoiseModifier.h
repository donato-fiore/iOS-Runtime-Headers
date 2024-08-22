// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKNOISEMODIFIER_H
#define GKNOISEMODIFIER_H

@class NSMutableArray, NSString;
@protocol GKNoiseModule;

#import <Foundation/Foundation.h>


@interface GKNoiseModifier : NSObject <GKNoiseModule>

 {
    NSMutableArray *_inputModules;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithInputModuleCount:(NSUInteger)arg0 ;
-(id)inputModuleAtIndex:(int)arg0 ;
-(int)requiredInputModuleCount;
-(void)setInputModule:(id)arg0 atIndex:(int)arg1 ;


@end


#endif