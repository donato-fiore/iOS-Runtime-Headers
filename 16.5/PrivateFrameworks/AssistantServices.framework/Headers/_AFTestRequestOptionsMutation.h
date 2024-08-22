// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFTESTREQUESTOPTIONSMUTATION_H
#define _AFTESTREQUESTOPTIONSMUTATION_H

@class NSString, NSNumber;
@protocol AFTestRequestOptionsMutating;

#import <Foundation/Foundation.h>

#import "AFTestRequestOptions.h"

@interface _AFTestRequestOptionsMutation : NSObject <AFTestRequestOptionsMutating>

 {
    AFTestRequestOptions *_base;
    NSInteger _requestPath;
    NSString *_inputOrigin;
    NSNumber *_isEyesFree;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getRequestPath;
-(id)getInputOrigin;
-(id)getIsEyesFree;
-(id)initWithBase:(id)arg0 ;
-(void)setInputOrigin:(id)arg0 ;
-(void)setIsEyesFree:(id)arg0 ;
-(void)setRequestPath:(NSInteger)arg0 ;


@end


#endif