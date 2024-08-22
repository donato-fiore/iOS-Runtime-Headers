// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRLANGUAGERESOURCESMANAGER_H
#define CRLANGUAGERESOURCESMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CRLanguageResourcesManager : NSObject

@property (retain) NSMutableDictionary *languageResourceStacks; // ivar: _languageResourceStacks
@property NSInteger resourceType; // ivar: _resourceType


+(id)postProcessManager;
+(id)sharedManager;
-(BOOL)lockResourcesForLocale:(id)arg0 sender:(id)arg1 block:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)addSubscriber:(id)arg0 forLocale:(id)arg1 ;
-(void)removeSubscriber:(id)arg0 forLocale:(id)arg1 ;


@end


#endif