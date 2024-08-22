// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFARCHIVER_H
#define NFARCHIVER_H

@class NSString;
@protocol NFArchiver;

#import <Foundation/Foundation.h>


@interface NFArchiver : NSObject <NFArchiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)archiveDirectory:(id)arg0 toLocation:(id)arg1 ;
-(BOOL)unarchive:(id)arg0 toLocation:(id)arg1 ;


@end


#endif