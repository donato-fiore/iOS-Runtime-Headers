// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNFILELISTINGRESULT_H
#define SNFILELISTINGRESULT_H

@class NSString, NSArray;
@protocol SNResult;

#import <Foundation/Foundation.h>


@interface SNFileListingResult : NSObject <SNResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *fileItems; // ivar: _fileItems
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFileItems:(id)arg0 ;


@end


#endif