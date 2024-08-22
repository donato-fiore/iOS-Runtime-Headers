// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKPRESENTATIONFEEDER_H
#define OKPRESENTATIONFEEDER_H

@class NSMutableDictionary, NSString;


#import "OKPresentationCanvas.h"

@interface OKPresentationFeeder : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
}


@property (copy, nonatomic) NSString *className; // ivar: _className


+(id)feederWithName:(id)arg0 className:(id)arg1 settings:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 andName:(id)arg1 forPresentation:(id)arg2 ;
-(void)dealloc;
-(void)resolveIfNeeded;


@end


#endif