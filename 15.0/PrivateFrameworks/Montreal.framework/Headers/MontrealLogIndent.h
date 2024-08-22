// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MONTREALLOGINDENT_H
#define MONTREALLOGINDENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MontrealLogIndent : NSObject

@property (readonly) NSUInteger factor; // ivar: _factor
@property (readonly) NSString *level; // ivar: _level
@property (readonly) NSString *step; // ivar: _step


+(id)indentWithLevel:(id)arg0 ;
+(id)indentWithLevel:(id)arg0 step:(id)arg1 factor:(NSUInteger)arg2 ;
-(id)description;
-(id)indentByFactor:(NSUInteger)arg0 ;
-(id)initWithLevel:(id)arg0 step:(id)arg1 factor:(NSUInteger)arg2 ;


@end


#endif