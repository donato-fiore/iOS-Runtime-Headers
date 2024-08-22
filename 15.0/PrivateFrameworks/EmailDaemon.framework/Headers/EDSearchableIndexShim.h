// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDSEARCHABLEINDEXSHIM_H
#define EDSEARCHABLEINDEXSHIM_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexShim : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultSearchableIndex;
+(id)log;
+(id)searchableIndexWithName:(id)arg0 protectionClass:(id)arg1 ;
+(id)searchableIndexWithName:(id)arg0 protectionClass:(id)arg1 bundleIdentifier:(id)arg2 ;


@end


#endif