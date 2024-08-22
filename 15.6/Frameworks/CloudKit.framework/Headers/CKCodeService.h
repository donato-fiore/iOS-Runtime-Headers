// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCODESERVICE_H
#define CKCODESERVICE_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "CKContainer.h"
#import "CKCodeServiceImplementation.h"

@interface CKCodeService : NSObject

@property (readonly, weak, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) CKCodeServiceImplementation *implementation; // ivar: _implementation
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL;
@property (readonly, copy, nonatomic) NSString *serviceName;


-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_initWithImplementation:(id)arg0 container:(id)arg1 ;
-(id)boxedDatabaseScope;
-(id)description;
-(id)init;
-(void)addOperation:(id)arg0 ;


@end


#endif