// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRTEXTEDITINGSESSIONWRAPPER_H
#define _TVRCMRTEXTEDITINGSESSIONWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TVRCMRTextEditingAttributesWrapper.h"

@interface _TVRCMRTextEditingSessionWrapper : NSObject {
    *void _session;
}


@property (readonly, nonatomic) _TVRCMRTextEditingAttributesWrapper *attributes;
@property (readonly, copy, nonatomic) NSString *text;


-(id)initWithSession:(*void)arg0 ;
-(void)dealloc;


@end


#endif