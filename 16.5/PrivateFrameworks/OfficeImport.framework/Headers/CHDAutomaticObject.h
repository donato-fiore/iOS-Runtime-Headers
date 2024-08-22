// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDAUTOMATICOBJECT_H
#define CHDAUTOMATICOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CHDAutomaticObject : NSObject {
    NSString *mName;
}




+(id)automaticEffects;
+(id)automaticFill;
+(id)automaticStroke;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 ;


@end


#endif