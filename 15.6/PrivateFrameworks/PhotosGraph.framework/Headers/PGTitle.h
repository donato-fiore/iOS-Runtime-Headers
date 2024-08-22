// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTITLE_H
#define PGTITLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGTitle : NSObject

@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


+(id)titleWithString:(id)arg0 category:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif