// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTONOTIFICATIONCENTER_H
#define NPTONOTIFICATIONCENTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NPTONotificationCenter : NSObject {
    NSString *_devicePairingID;
}




-(id)initWithDevice:(id)arg0 ;
-(id)observerForName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)postNotificationName:(id)arg0 ;


@end


#endif