// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLDOWNLOADMANIFESTRESPONSE_H
#define BLDOWNLOADMANIFESTRESPONSE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLDownloadManifestResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *validDownloadIDs; // ivar: _validDownloadIDs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif