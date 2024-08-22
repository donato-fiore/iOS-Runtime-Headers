// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNFILEDELETIONRESULT_H
#define SNFILEDELETIONRESULT_H

@class NSString, NSError;
@protocol SNResult;

#import <Foundation/Foundation.h>


@interface SNFileDeletionResult : NSObject <SNResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFileName:(id)arg0 error:(id)arg1 ;


@end


#endif