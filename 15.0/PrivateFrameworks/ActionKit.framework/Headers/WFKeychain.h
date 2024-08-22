// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFKEYCHAIN_H
#define WFKEYCHAIN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFKeychain : NSObject

@property (readonly, nonatomic) NSString *accessGroup; // ivar: _accessGroup
@property (readonly, nonatomic) NSString *service; // ivar: _service


-(BOOL)setData:(id)arg0 forKey:(id)arg1 ;
-(NSUInteger)numberOfItems;
-(id)dataForKey:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(id)initWithService:(id)arg0 accessGroup:(id)arg1 ;
-(id)items;


@end


#endif