// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDJOBMANAGEROPTIONS_H
#define ASDJOBMANAGEROPTIONS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *persistenceIdentifier; // ivar: _persistenceIdentifier
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads; // ivar: _shouldFilterExternalOriginatedDownloads
@property (nonatomic) BOOL shouldReportDownloadProgress; // ivar: _shouldReportDownloadProgress


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif