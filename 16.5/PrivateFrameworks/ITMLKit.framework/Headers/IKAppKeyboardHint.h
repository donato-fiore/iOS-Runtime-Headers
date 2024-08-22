// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKAPPKEYBOARDHINT_H
#define IKAPPKEYBOARDHINT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IKAppKeyboardHint : NSObject

@property (readonly, copy, nonatomic) NSString *badge; // ivar: _badge
@property (readonly, copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithBadge:(id)arg0 text:(id)arg1 searchTerm:(id)arg2 ;


@end


#endif