// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSYNCCHANGEARCHIVER_H
#define MTSYNCCHANGEARCHIVER_H

@class NSKeyedArchiver, NSCoder;
@protocol MTSerializer;



@interface MTSyncChangeArchiver : NSKeyedArchiver <MTSerializer>



@property (readonly, nonatomic) NSCoder *mtCoder;
@property (readonly, nonatomic) NSUInteger mtType;




@end


#endif