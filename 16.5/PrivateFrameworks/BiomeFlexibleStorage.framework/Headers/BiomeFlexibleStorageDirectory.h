// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMEFLEXIBLESTORAGEDIRECTORY_H
#define BIOMEFLEXIBLESTORAGEDIRECTORY_H


#import <Foundation/Foundation.h>


@interface BiomeFlexibleStorageDirectory : NSObject



+(id)directoryForPrivateTable;
+(id)privateDBPathWithIdentifier:(id)arg0 directory:(id)arg1 create:(BOOL)arg2 ;


@end


#endif