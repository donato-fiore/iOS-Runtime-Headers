// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPLEFIRMWAREUPDATECONTROLLER_H
#define APPLEFIRMWAREUPDATECONTROLLER_H

@class NSArray, NSString, NSNumber;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface AppleFirmwareUpdateController : NSObject {
    NSObject<OS_os_log> *_log;
}


@property (retain, nonatomic) NSArray *fdrClasses; // ivar: _fdrClasses
@property (retain, nonatomic) NSString *fwAssetDirectory; // ivar: _fwAssetDirectory
@property (retain, nonatomic) NSString *fwAssetFile; // ivar: _fwAssetFile
@property (retain, nonatomic) NSString *fwAssetSignatureType; // ivar: _fwAssetSignatureType
@property (retain, nonatomic) NSNumber *fwAssetSize; // ivar: _fwAssetSize
@property (retain, nonatomic) NSNumber *fwAssetVersion; // ivar: _fwAssetVersion
@property (retain, nonatomic) NSNumber *img4Tag; // ivar: _img4Tag
@property (retain, nonatomic) NSNumber *registryEntryID; // ivar: _registryEntryID


-(BOOL)createFWAssetInfo;
-(BOOL)getEarlyBootList:(id)arg0 ;
-(BOOL)isFWDownloadNeeded:(id)arg0 ;
-(NSInteger)sendFDRData:(unsigned int)arg0 ;
-(id)findFWAssetFromTag:(id)arg0 tag:(unsigned int)arg1 size:(*NSUInteger)arg2 ;
-(id)init;
-(id)updateFirmwareWithOptions:(id)arg0 ;
-(unsigned int)getConnectionForRegistryID:(*NSInteger)arg0 ;
-(unsigned int)getServiceForRegistryID:(*NSInteger)arg0 ;


@end


#endif