// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ARDISPLAYLINKHELPER_H
#define _ARDISPLAYLINKHELPER_H


#import <Foundation/Foundation.h>

#import "ARDisplayLink.h"

@interface _ARDisplayLinkHelper : NSObject {
    ARDisplayLink *_displayLink;
}




-(id)initWithDisplayLink:(id)arg0 ;
-(void)callback:(id)arg0 ;


@end


#endif