// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRTEXTEDITINGATTRIBUTESWRAPPER_H
#define _TVRCMRTEXTEDITINGATTRIBUTESWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TVRCMRTextEditingAttributesWrapper : NSObject {
    *void _attributes;
}


@property (readonly, copy, nonatomic) NSString *prompt;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) _MRTextInputTraits traits;


-(id)initWithAttributes:(*void)arg0 ;


@end


#endif