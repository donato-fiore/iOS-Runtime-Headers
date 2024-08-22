// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPACCESSORYWAKETUPLE_H
#define HAPACCESSORYWAKETUPLE_H

@class HMFObject, NSString, NSData;



@interface HAPAccessoryWakeTuple : HMFObject

@property (readonly, nonatomic) NSString *wakeAddress; // ivar: _wakeAddress
@property (readonly, nonatomic) NSData *wakePattern; // ivar: _wakePattern
@property (readonly, nonatomic) NSInteger wakePort; // ivar: _wakePort


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPort:(NSInteger)arg0 wakeAddress:(id)arg1 wakePattern:(id)arg2 ;


@end


#endif