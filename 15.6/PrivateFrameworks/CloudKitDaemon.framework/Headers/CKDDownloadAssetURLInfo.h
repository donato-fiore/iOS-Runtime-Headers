// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDDOWNLOADASSETURLINFO_H
#define CKDDOWNLOADASSETURLINFO_H

@class CKAsset;

#import <Foundation/Foundation.h>


@interface CKDDownloadAssetURLInfo : NSObject

@property (retain, nonatomic) CKAsset *asset; // ivar: _asset
@property (nonatomic) *_OpaquePCSShareProtection recordPCS; // ivar: _recordPCS


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif