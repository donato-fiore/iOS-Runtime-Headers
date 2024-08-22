// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMICSTORAGEPROVIDER_H
#define IAMICSTORAGEPROVIDER_H

@protocol IAMMessageEntryProvider, IAMMessageMetadataStorage, IAMPropertyStorage;

#import <Foundation/Foundation.h>


@interface IAMICStorageProvider : NSObject

@property (readonly, nonatomic) NSObject<IAMMessageEntryProvider> *messageEntryProvider; // ivar: _messageEntryProvider
@property (readonly, nonatomic) NSObject<IAMMessageMetadataStorage> *messageMetadataStorage; // ivar: _messageMetadataStorage
@property (readonly, nonatomic) NSObject<IAMPropertyStorage> *propertyStorage; // ivar: _propertyStorage




@end


#endif