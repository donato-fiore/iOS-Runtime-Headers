// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IFOBJECTHASHER_H
#define IFOBJECTHASHER_H


#import <Foundation/Foundation.h>


@interface IFObjectHasher : NSObject {
    SipHasher _hasher;
    NSUInteger _hash;
    BOOL _finalized;
}




-(NSUInteger)finalize;
-(id)combine:(id)arg0 ;
-(id)combineBool:(BOOL)arg0 ;
-(id)combineBytes:(*void)arg0 size:(NSUInteger)arg1 ;
-(id)combineContentsOfPropertyListObject:(id)arg0 ;
-(id)combineInteger:(NSUInteger)arg0 ;


@end


#endif