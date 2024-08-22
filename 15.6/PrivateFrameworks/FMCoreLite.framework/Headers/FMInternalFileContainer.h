// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMINTERNALFILECONTAINER_H
#define FMINTERNALFILECONTAINER_H

@class NSString, NSURL;
@protocol FMFileContainer;

#import <Foundation/Foundation.h>


@interface FMInternalFileContainer : NSObject <FMFileContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)init;
-(id)internalContainerURL;


@end


#endif