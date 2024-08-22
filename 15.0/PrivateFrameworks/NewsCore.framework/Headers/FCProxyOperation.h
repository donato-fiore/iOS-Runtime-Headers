// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPROXYOPERATION_H
#define FCPROXYOPERATION_H



#import "FCOperation.h"

@interface FCProxyOperation : FCOperation {
    FCOperation *_underlyingOperation;
}




+(id)proxyForOperation:(id)arg0 ;
+(void)initialize;
-(NSUInteger)propertiesInheritedByChildOperations;
-(void)operationDidFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)setPurpose:(id)arg0 ;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)setRelativePriority:(NSInteger)arg0 ;


@end


#endif