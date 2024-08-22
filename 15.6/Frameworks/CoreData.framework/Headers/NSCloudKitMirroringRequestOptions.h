// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCLOUDKITMIRRORINGREQUESTOPTIONS_H
#define NSCLOUDKITMIRRORINGREQUESTOPTIONS_H

@class CKOperationConfiguration;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSCloudKitMirroringRequestOptions : NSObject <NSCopying>



@property (nonatomic) BOOL allowsCellularAccess;
@property (retain, nonatomic) CKOperationConfiguration *operationConfiguration; // ivar: _operationConfiguration
@property (nonatomic) NSInteger qualityOfService;


-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif