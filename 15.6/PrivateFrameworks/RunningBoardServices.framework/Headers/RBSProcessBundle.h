// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSBUNDLE_H
#define RBSPROCESSBUNDLE_H

@class NSDictionary, NSString;
@protocol RBSXPCSecureCoding, RBSProcessBundleDataSource;

#import <Foundation/Foundation.h>

#import "RBSProcessInstance.h"

@interface RBSProcessBundle : NSObject <RBSXPCSecureCoding>

 {
    NSDictionary *_plistValues;
    id<RBSProcessBundleDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier; // ivar: _extensionPointIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) RBSProcessInstance *instance; // ivar: _instance
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(id)bundleWithDataSource:(id)arg0 ;
-(id)bundleInfoValueForKey:(id)arg0 ;
-(id)bundleInfoValuesForKeys:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif