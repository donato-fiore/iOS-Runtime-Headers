// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFARCHIVER_H
#define TFARCHIVER_H

@class NSString;
@protocol TFArchiver;

#import <Foundation/Foundation.h>


@interface TFArchiver : NSObject <TFArchiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)archiveDirectory:(id)arg0 toLocation:(id)arg1 ;
-(BOOL)unarchive:(id)arg0 toLocation:(id)arg1 ;


@end


#endif