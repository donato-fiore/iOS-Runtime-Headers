// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCLOUDRECORDASSETURL_H
#define PKCLOUDRECORDASSETURL_H

@class NSData;


#import "PKCloudRecordObject.h"

@interface PKCloudRecordAssetURL : PKCloudRecordObject {
    int _fd;
    NSData *_data;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg0 ;
-(id)assetData;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecords:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif