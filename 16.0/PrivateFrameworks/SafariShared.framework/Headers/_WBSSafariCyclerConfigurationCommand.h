// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WBSSAFARICYCLERCONFIGURATIONCOMMAND_H
#define _WBSSAFARICYCLERCONFIGURATIONCOMMAND_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _WBSSafariCyclerConfigurationCommand : NSObject

@property (nonatomic) SEL action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *help; // ivar: _help
@property (nonatomic) NSUInteger maximumArgumentCount; // ivar: _maximumArgumentCount
@property (nonatomic) NSUInteger minimumArgumentCount; // ivar: _minimumArgumentCount
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) id *target; // ivar: _target
@property (copy, nonatomic) NSString *usage; // ivar: _usage


-(BOOL)invokeWithParameters:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 help:(id)arg1 ;
-(void)setArgumentCount:(NSUInteger)arg0 ;


@end


#endif