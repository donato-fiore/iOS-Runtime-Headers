// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOERCIONOPTIONS_H
#define WFCOERCIONOPTIONS_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFCoercionOptions : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary


+(id)new;
+(id)optionsWithDictionary:(id)arg0 ;
+(void)registerDefaultDisallowedCoercionPath:(id)arg0 ;
-(BOOL)coercionPathIsDisallowed:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)itemClassPrioritizationType;
-(id)optionsByAddingContentsOfOptions:(id)arg0 ;
-(id)preferredTypes;
-(void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(id)arg0 ;
-(void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentSmartPromptForWebpageLoadWithURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif