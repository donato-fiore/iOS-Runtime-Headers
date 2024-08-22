// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTRANSFERSERVICESCOMPRESSIONCONTROLLER_H
#define IMTRANSFERSERVICESCOMPRESSIONCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMTransferServicesCompressionController : NSObject {
    NSMutableDictionary *_blockMap;
}




+(id)sharedInstance;
-(id)_blockForCopier:(SEL)arg0 ;
-(void)_mapCopier:(id)arg0 toBlock:(id)arg1 ;
-(void)_unmapCopier:(id)arg0 ;
-(void)compressFileTransfer:(id)arg0 completionBlock:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg0 ;
-(void)fileCopierDidStart:(id)arg0 ;


@end


#endif