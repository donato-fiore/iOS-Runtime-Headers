// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKGROUPSCONTROLLERSNAPSHOT_H
#define PKGROUPSCONTROLLERSNAPSHOT_H

@class NSDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCatalog.h"

@interface PKGroupsControllerSnapshot : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *annotationsByPassUniqueID; // ivar: _annotationsByPassUniqueID
@property (readonly, nonatomic) PKCatalog *catalog; // ivar: _catalog
@property (readonly, nonatomic) NSSet *passes; // ivar: _passes


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPasses:(id)arg0 annotationsByPassUniqueID:(id)arg1 catalog:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif