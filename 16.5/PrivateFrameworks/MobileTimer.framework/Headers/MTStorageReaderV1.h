// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSTORAGEREADERV1_H
#define MTSTORAGEREADERV1_H

@class NSKeyedUnarchiver, NSCoder;
@protocol MTSerializer;



@interface MTStorageReaderV1 : NSKeyedUnarchiver <MTSerializer>



@property (readonly, nonatomic) NSCoder *mtCoder;
@property (readonly, nonatomic) NSUInteger mtType;




@end


#endif