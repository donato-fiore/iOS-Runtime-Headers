// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CARTITLEALTERNATIVE_H
#define _CARTITLEALTERNATIVE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _CarTitleAlternative : NSObject

@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(id)alternativeWithTitle:(id)arg0 label:(id)arg1 ;
-(id)description;
-(void)updateWithLabel:(id)arg0 ;


@end


#endif