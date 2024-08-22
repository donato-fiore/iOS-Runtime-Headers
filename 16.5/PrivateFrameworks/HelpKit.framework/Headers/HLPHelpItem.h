// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HLPHELPITEM_H
#define HLPHELPITEM_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HLPHelpItem.h"

@interface HLPHelpItem : NSObject <NSCopying>

 {
    NSString *_decodedName;
}


@property (readonly, nonatomic) NSString *decodedName;
@property (copy, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger level; // ivar: _level
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) HLPHelpItem *parent; // ivar: _parent
@property (nonatomic) NSInteger serverType; // ivar: _serverType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg0 helpBookURL:(id)arg1 serverType:(NSInteger)arg2 ;


@end


#endif