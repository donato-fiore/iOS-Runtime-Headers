// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BIOSTREAMSEVENTHELPER_H
#define BIOSTREAMSEVENTHELPER_H


#import <Foundation/Foundation.h>


@interface BioStreamsEventHelper : NSObject

@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy


-(id)containerIdentifier;
-(id)initWithBKDeviceType:(NSInteger)arg0 inBuddy:(BOOL)arg1 ;
-(id)subtype;
-(void)sendSuccessfulEnrollEvent;


@end


#endif