// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDNDCONTEXTPROVIDER_H
#define ATXDNDCONTEXTPROVIDER_H

@class ATXCoreDuetContextHelper;

#import <Foundation/Foundation.h>


@interface ATXDNDContextProvider : NSObject {
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
}




-(id)init;
-(id)initWithContextHelper:(id)arg0 ;
-(id)latestDNDTransition;


@end


#endif