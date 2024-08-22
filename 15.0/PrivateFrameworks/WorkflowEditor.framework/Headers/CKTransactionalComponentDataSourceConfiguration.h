// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCECONFIGURATION_H
#define CKTRANSACTIONALCOMPONENTDATASOURCECONFIGURATION_H

@class NSThread;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface CKTransactionalComponentDataSourceConfiguration : NSObject {
    CKSizeRange _sizeRange;
}


@property (readonly, nonatomic) Class componentProvider; // ivar: _componentProvider
@property (readonly, nonatomic) NSObject<NSObject> *context; // ivar: _context
@property (readonly, nonatomic) NSThread *workThreadOverride; // ivar: _workThreadOverride


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithComponentProvider:(Class)arg0 context:(id)arg1 sizeRange:(struct CKSizeRange *)arg2 ;
-(id)initWithComponentProvider:(Class)arg0 context:(id)arg1 sizeRange:(struct CKSizeRange *)arg2 workThreadOverride:(id)arg3 ;
-(struct CKSizeRange *)sizeRange;


@end


#endif