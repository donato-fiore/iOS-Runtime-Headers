// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ERROR_H
#define NWCONCRETE_NW_ERROR_H

@class NSString;
@protocol OS_nw_error;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_error : NSObject <OS_nw_error>

 {
    int domain;
    int code;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif