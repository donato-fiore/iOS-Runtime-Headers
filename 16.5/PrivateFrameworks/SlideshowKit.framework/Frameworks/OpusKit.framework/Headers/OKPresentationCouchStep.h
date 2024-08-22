// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKPRESENTATIONCOUCHSTEP_H
#define OKPRESENTATIONCOUCHSTEP_H

@class NSMutableDictionary, NSString, NSArray;


#import "OKPresentationCanvas.h"

@interface OKPresentationCouchStep : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
}


@property (readonly) NSString *anchorPage; // ivar: _anchorPage
@property (copy, nonatomic) NSArray *dependencies; // ivar: _dependencies
@property (readonly) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL ignoresBusiness; // ivar: _ignoresBusiness
@property (readonly) NSString *script; // ivar: _script


+(id)couchStepWithAnchorPageName:(id)arg0 script:(id)arg1 duration:(CGFloat)arg2 settings:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 forPresentation:(id)arg1 andCouch:(id)arg2 ;
-(id)parentCouch;
-(void)dealloc;
-(void)resolveIfNeeded;


@end


#endif