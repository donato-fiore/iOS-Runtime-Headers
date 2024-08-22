// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSLAZYDIGESTUIDGENERATOR_H
#define ICSLAZYDIGESTUIDGENERATOR_H

@class NSData, NSString;
@protocol ICSUIDGenerator;

#import <Foundation/Foundation.h>


@interface ICSLazyDigestUIDGenerator : NSObject <ICSUIDGenerator>

 {
    NSData *_data;
    NSString *_digest;
    int _lastIndex;
}




-(id)_digest;
-(id)generateUID;
-(id)initWithData:(id)arg0 ;


@end


#endif