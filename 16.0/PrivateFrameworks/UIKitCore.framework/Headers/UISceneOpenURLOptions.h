// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCENEOPENURLOPTIONS_H
#define UISCENEOPENURLOPTIONS_H

@class BSProcessHandle, NSString;

#import <Foundation/Foundation.h>

#import "UIEventAttribution.h"

@interface UISceneOpenURLOptions : NSObject

@property (readonly, nonatomic) BOOL _openAsDownload; // ivar: _openAsDownload
@property (readonly, nonatomic) BSProcessHandle *_sourceProcessHandle; // ivar: _sourceProcessHandle
@property (readonly, nonatomic) id *annotation; // ivar: _annotation
@property (readonly, nonatomic) UIEventAttribution *eventAttribution; // ivar: _eventAttribution
@property (readonly, nonatomic) BOOL openInPlace; // ivar: _openInPlace
@property (readonly, nonatomic) NSString *sourceApplication; // ivar: _sourceApp


+(id)_optionsFromDictionary:(id)arg0 ;
+(id)_optionsFromPayload:(id)arg0 sourceProcessHandle:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithSourceApplication:(id)arg0 processHandle:(id)arg1 annotation:(id)arg2 openInPlace:(BOOL)arg3 ;
-(id)_initWithSourceApplication:(id)arg0 processHandle:(id)arg1 annotation:(id)arg2 openInPlace:(BOOL)arg3 eventAttribution:(id)arg4 openAsDownload:(BOOL)arg5 ;
-(id)description;


@end


#endif