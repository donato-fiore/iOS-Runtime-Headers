// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUDOWNLOAD_H
#define SUDOWNLOAD_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUDescriptor.h"
#import "SUDownloadOptions.h"
#import "SUDownloadMetadata.h"
#import "SUOperationProgress.h"

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) SUDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) SUDownloadOptions *downloadOptions; // ivar: _downloadOptions
@property (retain, nonatomic) SUDownloadMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) SUOperationProgress *progress; // ivar: _progress


+(BOOL)supportsSecureCoding;
-(BOOL)allowCellularDownload;
-(BOOL)isValidDownload;
-(NSUInteger)totalSpaceConsumed;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif