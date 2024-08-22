// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIUPLOADASSET_H
#define DIUPLOADASSET_H

@class NSUUID, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIUploadAsset : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *assetID; // ivar: _assetID
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif