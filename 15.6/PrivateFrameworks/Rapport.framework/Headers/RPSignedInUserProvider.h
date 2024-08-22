// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPSIGNEDINUSERPROVIDER_H
#define RPSIGNEDINUSERPROVIDER_H

@class NSString;
@protocol RPSignedInUserProvider;

#import <Foundation/Foundation.h>


@interface RPSignedInUserProvider : NSObject <RPSignedInUserProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)supportsMultipleUsers;
-(unsigned int)signedInUserID;


@end


#endif