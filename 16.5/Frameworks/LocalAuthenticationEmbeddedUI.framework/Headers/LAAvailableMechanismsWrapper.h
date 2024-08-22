// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAAVAILABLEMECHANISMSWRAPPER_H
#define LAAVAILABLEMECHANISMSWRAPPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface LAAvailableMechanismsWrapper : NSObject {
    NSArray *_mechanismEvents;
}


@property (readonly, nonatomic) BOOL allowsBiometry;
@property (readonly, nonatomic) BOOL allowsPasscode;
@property (readonly, nonatomic) BOOL allowsWatch;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) BOOL isEmpty;


-(id)initWithMechanismEvents:(id)arg0 ;


@end


#endif