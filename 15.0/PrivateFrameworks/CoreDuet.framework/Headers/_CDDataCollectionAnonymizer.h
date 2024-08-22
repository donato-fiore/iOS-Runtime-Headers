// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDDATACOLLECTIONANONYMIZER_H
#define _CDDATACOLLECTIONANONYMIZER_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _CDDataCollectionAnonymizer : NSObject <NSCopying>

 {
    NSData *_salt;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif