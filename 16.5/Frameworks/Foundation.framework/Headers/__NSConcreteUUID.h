// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCONCRETEUUID_H
#define __NSCONCRETEUUID_H



#import "NSUUID.h"

@interface __NSConcreteUUID : NSUUID {
    unsigned char _uuidBytes;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)UUIDString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithUUIDBytes:(unsigned char)arg0 ;
-(id)initWithUUIDString:(id)arg0 ;
-(void)getUUIDBytes:(unsigned char)arg0 ;


@end


#endif