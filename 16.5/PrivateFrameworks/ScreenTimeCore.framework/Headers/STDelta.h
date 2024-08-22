// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDELTA_H
#define STDELTA_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface STDelta : NSObject

@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithUniqueIdentifier:(id)arg0 ;
-(void)changedWithDictionary:(id)arg0 ;
-(void)deleted;


@end


#endif