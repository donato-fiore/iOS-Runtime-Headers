// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTORYBOARDPROXY_H
#define _UISTORYBOARDPROXY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIStoryboard.h"

@interface _UIStoryboardProxy : NSObject <NSSecureCoding>

 {
    UIStoryboard *_storyboard;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoryboard:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif