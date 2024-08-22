// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIINDEXTOKEN_H
#define PSIINDEXTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PSIIndexToken : NSObject

@property (readonly, nonatomic) short category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) short owningCategory; // ivar: _owningCategory
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)description;
-(id)initWithText:(id)arg0 identifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;


@end


#endif