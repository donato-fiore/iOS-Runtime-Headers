// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAHASCENEACTION_H
#define SAHASCENEACTION_H

@class NSURL;


#import "SADomainObject.h"
#import "SAHAAction.h"

@interface SAHASceneAction : SADomainObject

@property (retain, nonatomic) SAHAAction *action;
@property (copy, nonatomic) NSURL *entityId;


+(id)sceneAction;
+(id)sceneActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif