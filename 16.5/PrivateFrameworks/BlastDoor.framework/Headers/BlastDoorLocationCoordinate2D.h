// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORLOCATIONCOORDINATE2D_H
#define BLASTDOORLOCATIONCOORDINATE2D_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorLocationCoordinate2D : NSObject {
    ? locationCoordinate2D;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) CGFloat latitude;
@property (nonatomic, readonly) CGFloat longitude;


-(id)init;


@end


#endif