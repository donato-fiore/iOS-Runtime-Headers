// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNMODELFILEIMPL_H
#define VNMODELFILEIMPL_H

@class NSString;
@protocol VNModelFile;

#import <Foundation/Foundation.h>


@interface VNModelFileImpl : NSObject <VNModelFile>

 {
    *mapped_model_file m_impl;
}


@property (readonly, nonatomic) *void baseAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) *__sFILE ptrFile;
@property (retain, nonatomic) NSString *resourcePath;
@property (readonly) Class superclass;


-(id)initWithMappedModel:(struct mapped_model_file *)arg0 ;
-(void)advise:(NSInteger)arg0 ;


@end


#endif