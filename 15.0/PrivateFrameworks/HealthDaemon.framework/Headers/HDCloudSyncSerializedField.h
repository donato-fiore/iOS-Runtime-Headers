// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSERIALIZEDFIELD_H
#define HDCLOUDSYNCSERIALIZEDFIELD_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface HDCloudSyncSerializedField : NSObject

@property (readonly, copy, nonatomic) NSSet *classes; // ivar: _classes
@property (readonly, nonatomic) BOOL encrypted; // ivar: _encrypted
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key


+(id)fieldForKey:(id)arg0 classes:(id)arg1 encrypted:(BOOL)arg2 ;


@end


#endif