// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMEXTERNALSYNCMETADATAUTILS_H
#define REMEXTERNALSYNCMETADATAUTILS_H


#import <Foundation/Foundation.h>


@interface REMExternalSyncMetadataUtils : NSObject



+(BOOL)shouldUseExternalIdentifierAsDeletionKeyWithAccountType:(NSInteger)arg0 ;
+(id)decodeExternalIdentifierForMarkedForDeletionObject:(id)arg0 ;
+(id)encodeExternalIdentifierForMarkedForDeletionObject:(id)arg0 ;


@end


#endif