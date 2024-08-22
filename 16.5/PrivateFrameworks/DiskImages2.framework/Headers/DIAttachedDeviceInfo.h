// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIATTACHEDDEVICEINFO_H
#define DIATTACHEDDEVICEINFO_H

@class NSString, NSNumber, NSURL;

#import <Foundation/Foundation.h>

#import "DIIOMedia.h"

@interface DIAttachedDeviceInfo : NSObject

@property (readonly, copy, nonatomic) NSString *BSDName;
@property (readonly, nonatomic) NSNumber *blockSize;
@property (readonly, copy, nonatomic) NSURL *cacheURL; // ivar: _cacheURL
@property (readonly, nonatomic) NSInteger frameworkNum; // ivar: _frameworkNum
@property (readonly, copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) DIIOMedia *ioMedia; // ivar: _ioMedia
@property (readonly, nonatomic) NSNumber *mediaSize;
@property (readonly, nonatomic) NSNumber *pid; // ivar: _pid
@property (readonly, copy, nonatomic) NSURL *shadowURL; // ivar: _shadowURL


+(id)DI1URLWithData:(id)arg0 error:(*id)arg1 ;
+(id)copyAllMountPoints;
+(id)newDI1DevicesArrayWithError:(*id)arg0 ;
+(id)newDI2DevicesArrayWithError:(*id)arg0 ;
+(id)newDevicesArrayWithError:(*id)arg0 ;
+(id)newEntityDictWithIOMedia:(id)arg0 mountPoints:(id)arg1 ;
-(BOOL)fillDI1InfoWithDevice:(id)arg0 error:(*id)arg1 ;
-(BOOL)fillDI2InfoWithDevice:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDI2PIDWithDevice:(id)arg0 error:(*id)arg1 ;
-(id)copyEntitiesList;
-(id)description;
-(id)initWithBSDName:(id)arg0 error:(*id)arg1 ;
-(id)initWithDevice:(id)arg0 error:(*id)arg1 ;
-(id)toDictionary;


@end


#endif