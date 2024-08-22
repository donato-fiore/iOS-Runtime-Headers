// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAMFIGAROEVENT_H
#define IAMFIGAROEVENT_H

@class NSString, NSDictionary;
@protocol IAMEventProtocol;

#import <Foundation/Foundation.h>


@interface IAMFigaroEvent : NSObject <IAMEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) id *value;


-(BOOL)matchesWithKey:(id)arg0 ;
-(id)decomposeKey:(id)arg0 ;
-(id)initWithFigaroEventProperties:(id)arg0 ;
-(id)serializeFigaroEventProperties:(id)arg0 withPrefix:(id)arg1 ;


@end


#endif