// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDARGONSERVICEXPCWRAPPER_H
#define NTKDARGONSERVICEXPCWRAPPER_H

@class NSString;
@protocol NTKFaceSupportServer;

#import <Foundation/Foundation.h>


@interface NTKDArgonServiceXPCWrapper : NSObject <NTKFaceSupportServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedXPCWrapper;
-(void)ingestKeyDescriptor:(id)arg0 withCompletion:(id)arg1 ;
-(void)queryForNewFaces:(id)arg0 ;


@end


#endif