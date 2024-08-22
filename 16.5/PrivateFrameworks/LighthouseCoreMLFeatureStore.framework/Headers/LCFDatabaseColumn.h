// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFDATABASECOLUMN_H
#define LCFDATABASECOLUMN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LCFDatabaseColumn : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *typeDb; // ivar: _typeDb


-(id)init:(id)arg0 typeDb:(id)arg1 ;


@end


#endif