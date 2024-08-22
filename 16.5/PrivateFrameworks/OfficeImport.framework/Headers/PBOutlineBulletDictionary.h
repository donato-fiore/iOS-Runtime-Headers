// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBOUTLINEBULLETDICTIONARY_H
#define PBOUTLINEBULLETDICTIONARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PBOutlineBulletDictionary : NSObject {
    NSMutableDictionary *mDictionary;
}




-(id)initFromContainer:(id)arg0 objectType:(unsigned int)arg1 ;
-(id)objectForSlideId:(unsigned int)arg0 textType:(int)arg1 placeholderIndex:(unsigned int)arg2 ;


@end


#endif