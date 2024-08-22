// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKTOKENATTRIBUTEDSTRING_H
#define _MKTOKENATTRIBUTEDSTRING_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface _MKTokenAttributedString : NSObject

@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (copy, nonatomic) NSString *string; // ivar: _string


-(BOOL)isEmpty;
-(id)description;


@end


#endif