// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMFMSTATEMENT_H
#define _BMFMSTATEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _bmFMStatement : NSObject

@property BOOL inUse; // ivar: _inUse
@property (retain) NSString *query; // ivar: _query
@property *void statement; // ivar: _statement
@property NSInteger useCount; // ivar: _useCount


-(id)description;
-(void)close;
-(void)dealloc;
-(void)reset;


@end


#endif