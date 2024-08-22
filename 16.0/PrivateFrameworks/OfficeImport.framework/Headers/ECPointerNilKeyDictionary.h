// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECPOINTERNILKEYDICTIONARY_H
#define ECPOINTERNILKEYDICTIONARY_H



#import "OITSUPointerKeyDictionary.h"

@interface ECPointerNilKeyDictionary : OITSUPointerKeyDictionary {
    id *mNilKeyObject;
}




-(id)objectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forUncopiedKey:(id)arg1 ;


@end


#endif