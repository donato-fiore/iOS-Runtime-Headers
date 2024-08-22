// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABCLOSEUNDOGROUP_H
#define TABCLOSEUNDOGROUP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TabCloseUndoGroup : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)_initWithType:(NSInteger)arg0 name:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif