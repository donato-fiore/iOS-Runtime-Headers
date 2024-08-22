// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASEFUNCTION_H
#define ML3DATABASEFUNCTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ML3DatabaseFunction : NSObject

@property (nonatomic) int argumentCount; // ivar: _argumentCount
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)registerWithConnection:(id)arg0 ;
-(id)initWithName:(id)arg0 argumentCount:(int)arg1 ;


@end


#endif