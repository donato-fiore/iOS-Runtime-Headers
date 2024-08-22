// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCLOUDRECORDPASSCATALOG_H
#define PKCLOUDRECORDPASSCATALOG_H



#import "PKCloudRecordObject.h"
#import "PKCatalog.h"

@interface PKCloudRecordPassCatalog : PKCloudRecordObject

@property (retain, nonatomic) PKCatalog *catalog; // ivar: _catalog


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg0 ;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)item;
-(void)applyCloudRecordObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif