// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PADVNFACEPOSEREQUEST_H
#define PADVNFACEPOSEREQUEST_H

@class NSString, NSArray;
@protocol PADVNRequestProtocol, PADModelLoader, PADAuditDataRepository;

#import <Foundation/Foundation.h>


@interface PADVNFacePoseRequest : NSObject <PADVNRequestProtocol>

 {
    id<PADModelLoader> *_models;
    id<PADAuditDataRepository> *_audit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;


-(id)init;
-(struct __CVBuffer *)_obtainFaceCrop:(id)arg0 error:(*id)arg1 ;
-(void)_detectFaceBounds:(id)arg0 error:(*id)arg1 ;
-(void)_storeCrop:(struct __CVBuffer *)arg0 forFrame:(id)arg1 observation:(id)arg2 ;
-(void)performOn:(id)arg0 error:(*id)arg1 ;


@end


#endif