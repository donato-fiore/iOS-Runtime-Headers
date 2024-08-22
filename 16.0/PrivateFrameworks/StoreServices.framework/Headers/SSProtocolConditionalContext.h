// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPROTOCOLCONDITIONALCONTEXT_H
#define SSPROTOCOLCONDITIONALCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSProtocolConditionalContext : NSObject <NSCopying>



@property (copy, nonatomic) id *itemLookupBlock; // ivar: _itemLookupBlock
@property (copy, nonatomic) NSString *platformName; // ivar: _platformName
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif