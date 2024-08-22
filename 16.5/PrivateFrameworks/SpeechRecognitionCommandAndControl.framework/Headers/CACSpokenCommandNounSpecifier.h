// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACSPOKENCOMMANDNOUNSPECIFIER_H
#define CACSPOKENCOMMANDNOUNSPECIFIER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CACSpokenCommandNounSpecifier : NSObject

@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) unsigned int type; // ivar: _type


-(id)description;
-(id)initWithType:(unsigned int)arg0 item:(id)arg1 ;
-(id)initWithType:(unsigned int)arg0 items:(id)arg1 ;


@end


#endif