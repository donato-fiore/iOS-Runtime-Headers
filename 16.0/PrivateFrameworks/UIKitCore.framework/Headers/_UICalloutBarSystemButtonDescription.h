// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALLOUTBARSYSTEMBUTTONDESCRIPTION_H
#define _UICALLOUTBARSYSTEMBUTTONDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UICalloutBarSystemButtonDescription : NSObject {
    UIImage *m_image;
    int m_type;
}


@property (readonly, nonatomic) SEL action; // ivar: m_action
@property (copy, nonatomic) id *configurationBlock; // ivar: m_configurationBlock
@property (retain, nonatomic) NSString *title; // ivar: m_title


+(id)buttonDescriptionWithImage:(id)arg0 action:(SEL)arg1 type:(int)arg2 ;
+(id)buttonDescriptionWithTitle:(id)arg0 action:(SEL)arg1 type:(int)arg2 ;
+(id)buttonDescriptionWithTitle:(id)arg0 image:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(id)initWithTitle:(id)arg0 orImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(id)materializeButtonInView:(id)arg0 visualStyle:(id)arg1 ;


@end


#endif