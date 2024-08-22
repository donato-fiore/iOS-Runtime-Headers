// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPROFILEITEMDETAIL_H
#define DMCPROFILEITEMDETAIL_H

@class NSString, NSAttributedString;

#import <Foundation/Foundation.h>


@interface DMCProfileItemDetail : NSObject

@property (readonly, nonatomic) NSString *detail; // ivar: _detail
@property (readonly, nonatomic) BOOL isTrusted; // ivar: _isTrusted
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSAttributedString *trustText; // ivar: _trustText


+(id)itemDetailWithTitle:(id)arg0 detail:(id)arg1 ;
-(id)initWithTitle:(id)arg0 detail:(id)arg1 isTrusted:(BOOL)arg2 trustText:(id)arg3 ;


@end


#endif