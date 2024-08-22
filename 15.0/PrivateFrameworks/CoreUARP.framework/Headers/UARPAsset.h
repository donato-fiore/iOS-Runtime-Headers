// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPASSET_H
#define UARPASSET_H

@class NSURL, NSFileHandle, NSData;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPAssetID.h"

@interface UARPAsset : NSObject {
    NSURL *_url;
    NSFileHandle *_filehandle;
    NSObject<OS_os_log> *_log;
    NSInteger _onceToken;
}


@property (readonly) NSData *data; // ivar: _data
@property (readonly) NSUInteger fileLength;
@property (readonly) UARPAssetID *id; // ivar: _id


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)prepareLocalFileForUse:(*id)arg0 ;
-(id)description;
-(id)getDataInRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)initWithID:(id)arg0 ;
-(id)initWithID:(id)arg0 withBuffer:(id)arg1 ;
-(void)concludeLocalFileAccess;


@end


#endif