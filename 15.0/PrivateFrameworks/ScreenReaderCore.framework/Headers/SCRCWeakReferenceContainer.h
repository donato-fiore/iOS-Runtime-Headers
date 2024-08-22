// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCWEAKREFERENCECONTAINER_H
#define SCRCWEAKREFERENCECONTAINER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SCRCWeakReferenceContainer : NSObject <NSCopying>

 {
    id *_weakReference;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)autoreleasedReference;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)strongReference;
-(void)dealloc;


@end


#endif