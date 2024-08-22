// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAMEVENT_H
#define IAMEVENT_H

@class NSString, NSDictionary;
@protocol IAMEventProtocol;

#import <Foundation/Foundation.h>


@interface IAMEvent : NSObject <IAMEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) id *value;


-(BOOL)matchesWithKey:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif